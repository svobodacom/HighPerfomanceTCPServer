#ifndef TCPCONNECTIONS_H
#define TCPCONNECTIONS_H

#include <QObject>

class TcpConnections : public QObject
{
    Q_OBJECT
public:
    explicit TcpConnections(QObject *parent = nullptr);

signals:
};

#endif // TCPCONNECTIONS_H
