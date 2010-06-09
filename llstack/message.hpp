/* llparser.hpp -- parse LL message template file
 *
 *			Ryan McDougall
 */

#ifndef LLPARSER_H_
#define LLPARSER_H_

#include <QtEndian>
#include <QVector3D>
#include <QQuaternion>

namespace Scaffold
{
    namespace LLStack
    {
        const float MAX_BPS (1000000.0f);
        const size_t MAX_MESSAGE_SIZE (2048);
        const size_t MESSAGE_POOL_SIZE (16);
        const uint8_t ZERO_CODE_FLAG (0x80);
        const uint8_t RELIABLE_FLAG (0x40);
        const uint8_t RESENT_FLAG (0x20);
        const uint8_t ACK_FLAG (0x10);

        struct VariableInfo
        {
            enum 
            { 
                ERROR, BOOL, S8, S16, S32, S64, U8, U16, U32, U64, F32, F64,
                LLUUID, LLVECTOR3, LLVECTOR3D, LLVECTOR4, LLQUATERION, 
                IPADDR, IPPORT, FIXED, VARIABLE, VARIABLE1, VARIABLE2 
            };

            typedef std::vector <VariableInfo> List;

            string  name;
            int     type;
            int     size;
        };

        struct BlockInfo
        {
            enum { ERROR, SINGLE, MULTIPLE, VARIABLE };

            typedef std::vector <BlockInfo> List;

            string  name;
            int     repetition;
            int     multiplicy;

            VariableInfo::List variables;
        };

        struct PacketInfo
        {
            enum { ERROR, LOW, MEDIUM, HIGH, FIXED };

            typedef std::vector <PacketInfo> List;

            string      name;
            uint32_t    id;

            int         priority;
            bool        trusted;
            bool        encoded;
            bool        deprecated;

            BlockInfo::List blocks;
        };

        struct ByteBuffer
        {
            typedef std::vector <ByteBuffer *> Heap;
            typedef std::set <ByteBuffer *> Set;

            size_t  size;
            uint8_t *data;
        
            ByteBuffer (size_t s) : size (s), data (new uint8_t [s]) {}
            void dispose () { delete [] data; }
            
            bool operator< (const ByteBuffer &r) { return size < r.size; }
        };

        class Message 
        {
            public:
                typedef std::vector <string> ParamList;
                typedef void (Listener) (const shared_ptr<Message> &);
                typedef Subscription <Listener> Signal;

                enum SeekType { Beg, Cur, End };

                Message (shared_ptr <ByteBuffer> d, uint32_t id = 0);
                
                void seek (size_t pos, SeekType dir = Cur);

                template <typename T> void next () { seek (sizeof (T)); }

                template <typename T> void put (T value) { T *ptr = (T *)pos_; *ptr = value; }
                template <typename T> void putBigEndian (T value) { qToBigEndian <T> (value, pos_); } 
                template <typename T> void putLittleEndian (T value) { qToLittleEndian <T> (value, pos_); } 

                template <typename T> void get (T& value) { T *ptr = (T *)pos_; value = *ptr; }
                template <typename T> void getBigEndian (T& value) { value = qFromBigEndian <T> (pos_); }
                template <typename T> void getLittleEndian (T& value) { value = qFromLittleEndian <T> (pos_); } 

                template <typename T> void push (T value) { put (value); next <T> (); }
                template <typename T> void pushBigEndian (T value) { putBigEndian (value); next <T> (); }
                template <typename T> void pushLittleEndian (T value) { putLittleEndian (value); next <T> (); } 

                template <typename T> void pop (T& value) { get (value); next <T> (); }
                template <typename T> void popBigEndian (T& value) { getBigEndian (value); next <T> (); }
                template <typename T> void popLittleEndian (T& value) { getLittleEndian (value); next <T> (); }

                void pushHeader (uint8_t flags, uint32_t seq, uint8_t extra = 0);
                void popHeader (uint8_t &flags, uint32_t &seq, uint8_t &extra);

                void pushMsgID (int priority, uint32_t id);
                void popMsgID (int &priority, uint32_t &id);

                void pushBlock (uint8_t repetitions);
                void popBlock (uint8_t &repetitions);

                void pushVariableSize (size_t size);
                void pushVariable (const std::vector <uint8_t> &buf);
                void popVariable1 (std::vector <uint8_t> &buf, uint8_t &size);
                void popVariable2 (std::vector <uint8_t> &buf, uint16_t &size);

                pair <const char*, size_t> sendBuffer () const;
                pair <char*, size_t> recvBuffer () const;

                void print (std::ostream &out);

            private:
                shared_ptr <ByteBuffer> data_;

                uint32_t    id_;
                uint8_t     *begin_;
                uint8_t     *pos_;
                uint8_t     *end_;
                uint8_t     *max_;
        };

        template <> void Message::push <string> (string value);
        template <> void Message::pop <string> (string &value);
        template <> void Message::push <QQuaternion> (QQuaternion value);
        template <> void Message::pop <QQuaternion> (QQuaternion &value);

        class MessageParser
        {
            public:
                MessageParser (const char *filename);

            public:
                bool parse (PacketInfo &info);

            private:
                bool parse_ (PacketInfo &info);

            private:
                bool            run_;
                std::ifstream   file_;
        };
        
        class MessageFactory
        {
            public:
                MessageFactory ();
                ~MessageFactory ();

            public:
                auto_ptr <Message> create (uint32_t id = 0, size_t size = 0);

            private:
                ByteBuffer *add_free_buffer_ (size_t size);
                ByteBuffer *next_free_buffer_ ();
                ByteBuffer *get_free_buffer_ ();

                void set_free_buffer_ (ByteBuffer *buf);
                void set_used_buffer_ (ByteBuffer *buf);

            private:
                bool    error_;

                PacketInfo          info_;
                MessageParser       parser_;

                ByteBuffer::Set     used_;
                ByteBuffer::Heap    free_;
        };
    }
}

#endif //LLPARSER_H_