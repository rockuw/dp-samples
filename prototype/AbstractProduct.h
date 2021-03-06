#ifndef ABSTRACT_PRODUCT_H
#define ABSTRACT_PRODUCT_H

#include <string>

class AbstractProduct
{
    public:
        AbstractProduct(){}
        virtual ~AbstractProduct(){}

        virtual std::string getDescription(){
            return "Product";
        }

        virtual AbstractProduct *clone(void) = 0;
};

#endif
