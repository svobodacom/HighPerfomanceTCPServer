#include "tcpconnection.h"

TcpConnection::TcpConnection(QObject *parent)
    : QObject{parent}
{
     qDebug() << this << "Created";
}

TcpConnection::~TcpConnection()
{
    qDebug() << this << "Destroyed";
}

void TcpConnection::setSocket(QTcpSocket *socket)
{

}

QTcpSocket *TcpConnection::getSocket()
{

}

void TcpConnection::connected()
{

}

void TcpConnection::disconnected()
{

}

void TcpConnection::bytesWritten(qint64 bytes)
{

}

void TcpConnection::stateChanged(QAbstractSocket::SocketState socketState)
{

}

void TcpConnection::error(QAbstractSocket::SocketError socketError)
{

}
