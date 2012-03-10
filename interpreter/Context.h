#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>

class Context
{
    public:
        Context(const std::string& str):_str(str), _pos(0), _mem(0){}
        ~Context(){}

        char nextChar(void){
            char ret = '$';
            if(_pos < _str.length()){
                ret = _str[_pos++];
            }
            return ret;
        }

        void backup(void){
            _mem = _pos;
        }

        void restore(void){
            _pos = _mem;
        }
        
        bool end(void){
            return _pos == _str.length();
        }

    private:
        std::string _str;
        int _pos;
        int _mem;
};

#endif
