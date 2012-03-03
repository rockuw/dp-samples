#ifndef CONCRETE_ADDITIVE_H
#define CONCRETE_ADDITIVE_H

#include "Additive.h"

class Sugar: public Additive
{
    public:
        Sugar(Drink *drink): Additive(drink){}
        ~Sugar(){}

        std::string getDescription(void) const{
            return Additive::getDescription() + " with Sugar ";
        }

        double getPrice(void) const{
            return Additive::getPrice() + 2.0;
        }
};

class Ice: public Additive
{
    public:
        Ice(Drink *drink): Additive(drink){}
        ~Ice(){}

        std::string getDescription(void) const{
            return Additive::getDescription() + " with Ice ";
        }

        double getPrice(void) const{
            return Additive::getPrice() + 1.0;
        }
};

#endif
