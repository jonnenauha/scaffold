/* provider.hpp -- session and stream provider for LLUDP
 *
 */

#ifndef LL_PROVIDER_H_
#define LL_PROVIDER_H_

#include "stdheaders.hpp"
#include "application.hpp"
#include "service.hpp"
#include "session.hpp"

#include "llplugin/uuid.hpp"
#include "llplugin/message.hpp"
#include "llplugin/messageid.hpp"

#include <QUrl>
#include <QUdpSocket>

class QNetworkAccessManager;

namespace Scaffold
{
    namespace Connectivity
    {
        namespace XmlRpc { class Call; }
        namespace Capabilities { class Caps; }
    }
}

namespace LLPlugin
{
    using namespace Scaffold;

    class Stream;
    class Session;
    class SessionProvider;

    //=========================================================================
    // LL Buddies

    struct Buddy
    {
        typedef std::list <Buddy> List;

        string  buddy_id;
        int     buddy_rights_given;
        int     buddy_rights_has;
    };

    //=========================================================================
    // LL Inventory Skeleton

    struct FolderSkeleton
    {
        typedef std::list <FolderSkeleton> List;

        string  name;
        string  folder_id;
        string  parent_id;
        int     type_default;
        int     version;
    };

    struct InventorySkeleton
    {
        string owner;
        FolderSkeleton root;
        FolderSkeleton::List folders;
    };

    //=========================================================================
    // Parameters used in Stream

    struct StreamParameters
    {
        UUID    agent_id;
        UUID    session_id;
        UUID    region_id;

        uint32_t circuit_code;
    };

    //=========================================================================
    // Parameters used in Session

    struct SessionParameters
    {
        string  message;

        string  sim_name;
        string  sim_ip;
        int     sim_port;

        QUrl seed_capabilities;
        QMap <QString, QUrl> capabilities;
    };


    //=========================================================================
    // Parameters used by LLAgent

    struct AgentParameters
    {
        string  first_name;
        string  last_name;

        Buddy::List buddies;
        InventorySkeleton inventory;

        string  home;
        string  look_at;
        string  start_location;
        int     region_x;
        int     region_y;
    };

    //=========================================================================
    // Parameters used by LLLogin

    struct LoginParameters
    {
        string  first;
        string  last;
        string  pass;
        QUrl    service;
    };

    //=========================================================================
    // Login object for Session

    class Login : public QObject
    {
        Q_OBJECT

        public:
            Login (Session *session);
            bool operator() (const LoginParameters &params);

            public slots:
                void on_login_result ();
            void on_caps_result ();

        private:
            Session *session_;

            Connectivity::XmlRpc::Call          *login_;
            Connectivity::Capabilities::Caps    *caps_;
            QNetworkAccessManager               *http_;
    };

    //=========================================================================
    // Login object for Session

    class Logout
    {
        public:
            Logout (Session *sesson);
            bool operator() ();

        private:
            Session *session_;
    };

    //=========================================================================
    // Stream

    class Stream : public QObject, public Connectivity::Stream
    { 
        Q_OBJECT

        public:
            Stream ();
            ~Stream ();

            void setSessionParameters (const SessionParameters &params);
            void setStreamParameters (const StreamParameters &params);

            bool isConnected () const;

            bool connect ();
            bool disconnect ();

            bool hasMessages ();
            bool waitForConnect ();
            bool waitForDisconnect ();
            bool waitForWrite ();
            bool waitForRead ();

            void listen (msg_id_t id, Message::Listener listen);

        public:
            void sendAckPacket ();
            void sendUseCircuitCodePacket ();
            void sendCompleteAgentMovementPacket ();
            void sendAgentThrottlePacket ();
            void sendAgentWearablesRequestPacket ();
            void sendRexStartupPacket (const string &state); 
            void sendGenericMessage (const string &method, const Message::GenericParams &parms);
            void sendLogoutRequest ();

            protected slots:
                void on_host_found ();
            void on_connected ();
            void on_disconnected ();
            void on_ready_read ();
            void on_bytes_written (qint64 bytes);
            void on_state_changed (QAbstractSocket::SocketState state);
            void on_error (QAbstractSocket::SocketError);
            void on_timeout ();

        private:
            void prepare_message_ (Message &m);

            bool send_message_ (Message &m);
            bool send_handle_acking_ (Message &m);
            bool send_handle_coding_ (Message &m);

            bool recv_message_ (Message &m);
            bool recv_handle_duplicate_ (Message &m);
            bool recv_handle_acking_ (Message &m);
            bool recv_handle_coding_ (Message &m);

            void resend_enqueue_ (Message &m);
            void resend_dequeue_ (uint32_t seq);
            void resend_process_ (int msec);

            void ack_enqueue_ (uint32_t seq);
            void ack_dequeue_ (uint32_t seq);
            void ack_append_ (Message &m);
            void ack_process_ (int msec);

        private:
            bool    connected_;

            MessageFactory          factory_;
            QUdpSocket              udp_;
            QTimer                  timer_;

            Message::NameMap        names_;
            Message::IDMap          idmap_;
            Message::SequenceSet    acks_;
            Message::SequenceSet    received_;
            Message::Map            resend_;

            Message::SubscriptionMap    subscribers_;

            StreamParameters        streamparam_;
            SessionParameters       sessionparam_;

            uint32_t    send_sequence_;
            int         ack_age_;
    };

    //=========================================================================
    // Session 

    class Session : public Connectivity::Session
    {
        public:
            Session ();
            ~Session ();

            void setLoginParameters (const Connectivity::LoginParameters &params);

            AgentParameters   getAgentParameters () const;
            SessionParameters getSessionParameters () const;
            StreamParameters  getStreamParameters () const;

            bool isConnected() const;
            Stream *stream ();

            bool connect ();
            bool disconnect ();

        private:
            bool    connected_;

            Stream  stream_;
            Login   login_;
            Logout  logout_;

            LoginParameters     loginparam_;
            AgentParameters     agentparam_;
            SessionParameters   sessionparam_;
            StreamParameters    streamparam_;

            friend class Login;
            friend class Logout;
            friend class SessionProvider;
    };

    //=========================================================================
    // Parameters used by SessionProvider

    class SessionProvider : public QObject, public Connectivity::SessionProvider
    {
        public:
            SessionProvider ();
            ~SessionProvider ();

            bool accepts (RequestType request) const;
            ResponseType retire (RequestType request);

            void initialize ();
            void finalize ();
            void update ();

            Connectivity::Session *session();

        protected:
            void timerEvent (QTimerEvent *e);

        private:
            Connectivity::Session *establish_session_blocking_ ();

        private:
            Session session_;

            Connectivity::LoginParameters   request_;
            bool    timeout_;
    };
}
#endif
