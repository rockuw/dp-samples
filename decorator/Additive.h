#ifndef ADDITIVE_H
#define ADDITIVE_H

#include "Drink.h"

class Additive: public Drink
{
    public:
        Additive(Drink *drink):_drink(drink){}
        virtual ~Additive(){
            delete _drink;
        }

        virtual std::string getDescription(void) const{
            return _drink->getDescription();
        }

        virtual double getPrice(void) const{
            return _drink->getPrice();
        }

    private:
        Drink *_drink;
};

#endif
