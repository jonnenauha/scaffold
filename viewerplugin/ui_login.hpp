/* ui_login.hpp - simple login ui
 *
 *			Jonne Nauha
 */
 
#ifndef LOGIN_H_
#define LOGIN_H_



#include <QWidget>
#include <QLineEdit>
#include <QLabel>

#include <QMap>
#include <QString>

namespace Scaffold
{
    namespace Framework
    {
        class Scheduler;
    }
    namespace Connectivity
    {
        typedef QMap <QString, QString> LoginParameters;    
    }
}

namespace ViewerPlugin
{
    using namespace Scaffold;
    
    class Logic;
    
    class LoginWidget : public QWidget
    {

    Q_OBJECT
        
    public:
        LoginWidget(Logic *logic, Framework::Scheduler *scheduler, QWidget *parent = 0);
        
    public slots:
        void set_connected(bool connected);
        void set_status(const QString &status);
        
    private slots:
        void init();
        void start_login();
        void exit();
        
        QMap<QString, QString> read_config();
        void write_config();
        
    signals:
        void try_login(Connectivity::LoginParameters params);
        
    private:
        Framework::Scheduler *scheduler_;
        Logic *logic_;
        
        QLineEdit *edit_name_;
        QLineEdit *edit_pwd_;
        QLineEdit *edit_host_;
        QLabel *label_status_;
    };
}

#endif
