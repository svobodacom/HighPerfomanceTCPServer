  #ifndef TCPCONNECTION_H
#define TCPCONNECTION_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>

class TcpConnection : public QObject
{
    Q_OBJECT
public:
    explicit TcpConnection(QObject *parent = nullptr);

    virtual void setSocket(QTcpSocket* socket);

signals:
};

#endif // TCPCONNECTION_H
