#ifndef TCPSTATE_H
#define TCPSTATE_H

#include <string>
#include <iostream>

class TCPConnection;

class TCPState
{
    public:
        TCPState(){}
        virtual ~TCPState() = 0;

        virtual void open(TCPConnection *conn){} 
        virtual void close(TCPConnection *conn){}
        virtual void transmit(TCPConnection *conn, const std::string& data){}
        virtual void changeState(TCPConnection *conn, TCPState *state);
};

class TCPClosed: public TCPState
{
    public:
        ~TCPClosed(){
            delete _instance;
        }
        
        static TCPClosed *getInstance(){
            if(_instance == 0){
                _instance = new TCPClosed();
            }
            return _instance;
        }
        
        void open(TCPConnection *conn);

    private:
        TCPClosed(){}

    private:
        static TCPClosed *_instance;
};

class TCPOpen: public TCPState
{
    public:
        ~TCPOpen(){
            delete _instance;
        }
        
        static TCPOpen *getInstance(){
            if(_instance == 0){
                _instance = new TCPOpen();
            }
            return _instance;
        }
        
        void close(TCPConnection *conn);

    private:
        TCPOpen(){}

    private:
        static TCPOpen *_instance;
};
#endif
