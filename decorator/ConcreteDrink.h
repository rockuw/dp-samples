#ifndef CONCRETE_DRINK_H
#define CONCRETE_DRINK_H

#include "Drink.h"

class Coffee: public Drink
{
    public:
        Coffee(){}
        ~Coffee(){}

        std::string getDescription(void) const{
            return "Coffee";
        }

        double getPrice(void) const{
            return 10.0;
        }
};

class Tea: public Drink
{
    public:
        Tea(){}
        ~Tea(){}

        std::string getDescription(void) const{
            return "Tea";
        }

        double getPrice(void) const{
            return 7.0;
        }
};

#endif
