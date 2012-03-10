#ifndef LIST_H
#define LIST_H

#include "Iterator.h"

const int MAX_LIST_SIZE = 10;

template <class Item>
class List
{
    public:
        List():_size(0){}
        virtual ~List(){}

        virtual bool append(const Item& item){
            if(_size < MAX_LIST_SIZE){
                _arr[_size] = item;
                _size ++;
            }
            return false;
        }
        
        virtual Item *getItem(int index){
            if(index < _size){
                return &_arr[index];
            }
            return 0;
        }

        virtual int getCount(void){
            return _size;
        }

        virtual Iterator<Item> *createIterator(void){
            return new Iterator<Item>(this);
        }

    private:
        Item _arr[MAX_LIST_SIZE];
        int _size;
};

template <class Item>
class ReverseList: public List<Item>
{
    public:
        Iterator<Item> *createIterator(void){
            return new ReverseIterator<Item>(this);
        }
};

#endif
