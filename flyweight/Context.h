#ifndef CONTEXT_H
#define CONTEXT_H

#include "Font.h"

class Context
{
    public:
        Context():_index(0), _size(0), _font(12, "Times"){}
        ~Context(){}

        Font *getFont(void){
            if(_index < 2) _font.setSize(10);
            else if(_index < 4) _font.setSize(12);
            else if(_index < 6) _font.setSize(14);
            
            return &_font;
        }

        void next(void){
            if(_index < _size)
                _index ++;
        }

        void insert(int pos = 0, int span = 1){
            _size ++;
        }

    private:
        int _index;
        int _size;
        Font _font;

};

#endif
