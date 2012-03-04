#ifndef GLYPH_H
#define GLYPH_H

#include "Context.h"
#include <cstdio>

class Glyph
{
    public:
        Glyph(){}
        virtual ~Glyph(){}

        virtual void draw(Context *context) = 0;
};

class Character: public Glyph
{
    public:
        Character(char c):_ch(c){}
        ~Character(){}

        void draw(Context *context){
            Font *font = context->getFont();
            printf(" %c(%d) ", _ch, font->getSize());
            context->next();
        }

    private:
        char _ch;
};

#endif
