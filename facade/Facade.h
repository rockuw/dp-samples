#ifndef FACADE_H
#define FACADE_H

#include "Upcaser.h"
#include "Revertor.h"

class Facade
{
    public:
        Facade(){}
        ~Facade(){}

        std::string process(const std::string& str){
            std::string ret;
            Upcaser up;
            Revertor rev;

            ret = up.upcase(str);
            ret = rev.revert(ret);

            return ret;
        }
};

#endif
