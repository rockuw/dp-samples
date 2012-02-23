#ifndef PRODUCT_H
#define PRODUCT_H

#include "AbstractProduct.h"

class CNProduct1: public AbstractProduct1
{
	public:
		CNProduct1(){}
		~CNProduct1(){}

		string getDescription(){
			return AbstractProduct1::getDescription() + " from CN";
		}
};

class USProduct1: public AbstractProduct1
{
	public:
		USProduct1(){}
		~USProduct1(){}

		string getDescription(){
			return AbstractProduct1::getDescription() + " from US";
		}
};

class CNProduct2: public AbstractProduct2
{
	public:
		CNProduct2(){}
		~CNProduct2(){}

		string getDescription(){
			return AbstractProduct2::getDescription() + " from CN";
		}
};

class USProduct2: public AbstractProduct2
{
	public:
		USProduct2(){}
		~USProduct2(){}

		string getDescription(){
			return AbstractProduct2::getDescription() + " from US";
		}
};

#endif
