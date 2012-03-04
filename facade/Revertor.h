#ifndef REVERTOR_H
#define REVERTOR_H

#include <string>

class Revertor
{
    public:
        Revertor(){}
        ~Revertor(){}

        std::string revert(const std::string& str){
            std::string ret = str;
            char swap = 0;
            for(int i = 0, j = ret.length() - 1; i < j; i ++, j --){
                swap = ret[i];
                ret[i] = ret[j];
                ret[j] = swap;
            }
            return ret;
        }
};

#endif
