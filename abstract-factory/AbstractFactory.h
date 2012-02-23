#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include "AbstractProduct.h"

class AbstractFactory
{
    public:
        AbstractFactory(){}
        virtual ~AbstractFactory(){}

        virtual AbstractProduct1 *createProduct1() = 0;
        virtual AbstractProduct2 *createProduct2() = 0;
};

#endif
