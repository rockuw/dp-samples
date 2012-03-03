#ifndef DRINK_H
#define DRINK_H

#include <string>

class Drink
{
    public:
        Drink(){}
        virtual ~Drink(){}

        virtual std::string getDescription(void) const{
            return "unknown drink";
        }

        virtual double getPrice(void) const{
            return 0;
        }
};

#endif
