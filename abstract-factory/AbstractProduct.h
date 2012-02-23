#ifndef ABSTRACT_PRODUCT_H
#define ABSTRACT_PRODUCT_H

#include <string>

using namespace std;

class AbstractProduct1
{
    public:
        AbstractProduct1(){}
        virtual ~AbstractProduct1(){}

        virtual string getDescription(){
            return "Product1";
        }
};

class AbstractProduct2
{
    public:
        AbstractProduct2(){}
        virtual ~AbstractProduct2(){}

        virtual string getDescription(){
            return "Product2";
        }
};

#endif
