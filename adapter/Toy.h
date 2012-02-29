#ifndef TOY_H
#define TOY_H

#include <iostream>

class CNToy
{
    public:
        CNToy(){}
        virtual ~CNToy(){}

        virtual void shuoHua() const {
            std::cout << "Ni Hao." << std::endl;
        }
};

class USToy
{
    public:
        USToy(){}
        virtual ~USToy(){}

        virtual void speak() const {
            std::cout << "Hello." << std::endl;
        }
};

#endif
