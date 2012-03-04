#ifndef UPCASER_H
#define UPCASER_H

#include <string>

class Upcaser
{
    public:
        Upcaser(){}
        ~Upcaser(){}

        std::string upcase(const std::string& str){
            std::string ret = str;
            for(int i = 0; i < ret.length(); i ++){
                ret[i] = std::toupper(ret[i]);
            }
            return ret;
        }
};

#endif
