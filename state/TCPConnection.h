#ifndef TCPCONNECTION_H
#define TCPCONNECTION_H

#include "TCPState.h"

class TCPConnection
{
    public:
        TCPConnection(){
            _state = TCPClosed::getInstance();
        }
        ~TCPConnection(){}

        void open(){
            _state->open(this);
        }

        void close(){
            _state->close(this);
        }

    private:
        friend class TCPState;
        void setState(TCPState *state){
            _state = state;
        }

    private:
        TCPState *_state;
};

#endif
