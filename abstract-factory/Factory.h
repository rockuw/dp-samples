#ifndef FACTORY_H
#define FACTORY_H

#include "AbstractFactory.h"
#include "Product.h"

class CNFactory: public AbstractFactory
{
	public:
		CNFactory(){}
		~CNFactory(){}

		AbstractProduct1 *createProduct1(){
			return new CNProduct1();
		}

		AbstractProduct2 *createProduct2(){
			return new CNProduct2();
		}
};

class USFactory: public AbstractFactory
{
	public:
		USFactory(){}
		~USFactory(){}

		AbstractProduct1 *createProduct1(){
			return new USProduct1();
		}

		AbstractProduct2 *createProduct2(){
			return new USProduct2();
		}
};

#endif
