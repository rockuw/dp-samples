#ifndef APPLICATION_H
#define APPLICATION_H

#include "AbstractProduct.h"
#include <iostream>

class Application
{
    public:
        Application(AbstractProduct *prototype):_prototype(prototype){}
        virtual ~Application(){
            delete _prototype;
        }

        void makeProduct(void){
            AbstractProduct *product = _prototype->clone();
            std::cout << product->getDescription() << std::endl;
            delete product;
        }


    private:
        AbstractProduct *_prototype;
};

#endif
