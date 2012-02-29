#ifndef ADAPTER_H
#define ADAPTER_H

#include "Toy.h"

class CNToyAdapter: public CNToy
{
    public:
        CNToyAdapter(USToy *toy):_USToy(toy){}
        ~CNToyAdapter(){
            delete _USToy;
        }

        void shuoHua() const {
            _USToy->speak();
        }

    private:
        USToy *_USToy;
};

#endif
