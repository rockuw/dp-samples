#ifndef ITERATOR_H
#define ITERATOR_H

template <class Item>
class List;

template <class Item>
class Iterator
{
    public:
        Iterator(List<Item> *list):_list(list), _current(0){}
        virtual ~Iterator(){}

        virtual void first(void){
            _current = 0;
        }

        virtual void next(void){
            if(_current < _list->getCount()) _current ++;
        }

        virtual bool isDone(void){
            return _current == _list->getCount();
        }

        virtual Item *current(void){
            return _list->getItem(_current);
        }

    private:
        List<Item> *_list;
        int _current;
};

template <class Item>
class ReverseIterator: public Iterator<Item>
{
    public:
        ReverseIterator(List<Item> *list):Iterator<Item>(list), _list(list){
            _current = _list->getCount() - 1;
        }

        virtual ~ReverseIterator(){}

        virtual void first(void){
            _current = _list->getCount() - 1;
        }

        virtual void next(void){
            if(_current >= 0) _current --;
        }

        virtual bool isDone(void){
            return _current < 0;
        }

        virtual Item *current(void){
            return _list->getItem(_current);
        }
    private:
        List<Item> *_list;
        int _current;
};

#endif
