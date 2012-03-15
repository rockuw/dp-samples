#include "TCPState.h"
#include "TCPConnection.h"

TCPClosed *TCPClosed::_instance = 0;
TCPOpen *TCPOpen::_instance = 0;

TCPState::~TCPState(){}

void TCPState::changeState(TCPConnection *conn, TCPState *state){
    conn->setState(state);
}

void TCPClosed::open(TCPConnection *conn){
    std::cout << "open a closed connection" << std::endl;
    changeState(conn, TCPOpen::getInstance());
}

void TCPOpen::close(TCPConnection *conn){
    std::cout << "close an open connection" << std::endl;
    changeState(conn, TCPClosed::getInstance());
}
