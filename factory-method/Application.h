#ifndef APPLICATION_H
#define APPLICATION_H

#include "AbstractProduct.h"
#include <iostream>

class Application
{
    public:
        Application():_product(0){}
        virtual ~Application(){
            delete _product;
        }

        void makeProduct(void){
            _product = doMakeProduct();
            std::cout << _product->getDescription() << std::endl;
        }

        // this is the factory method
        virtual AbstractProduct *doMakeProduct(void) = 0;

    private:
        AbstractProduct *_product;
};

#endif
