#ifndef USER_APPLICATION_H
#define USER_APPLICATION_H

#include "Application.h"
#include "Product.h"

class CNApp: public Application
{
    public:
        CNApp(){}
        ~CNApp(){}

        AbstractProduct *doMakeProduct(void){
            return new CNProduct();
        }
};

class USApp: public Application
{
    public:
        USApp(){}
        ~USApp(){}

        AbstractProduct *doMakeProduct(void){
            return new USProduct();
        }
};
#endif
