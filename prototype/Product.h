#ifndef PRODUCT_H
#define PRODUCT_H

#include "AbstractProduct.h"

class CNProduct: public AbstractProduct
{
    public:
        CNProduct(){}
        ~CNProduct(){}

        std::string getDescription(){
            return AbstractProduct::getDescription() + " from CN";
        }

        AbstractProduct *clone(void){
            return new CNProduct(*this);
        }
};

class USProduct: public AbstractProduct
{
    public:
        USProduct(){}
        ~USProduct(){}

        std::string getDescription(){
            return AbstractProduct::getDescription() + " from US";
        }

        AbstractProduct *clone(void){
            return new USProduct(*this);
        }
};

#endif
