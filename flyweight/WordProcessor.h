#ifndef WORD_PROCESSOR_H
#define WORD_PROCESSOR_H

#include <list>
#include "GlyphFactory.h"
#include "Context.h"

class WordProcessor
{
    public:
        WordProcessor(){}
        ~WordProcessor(){}

        void addChar(char c){
            _chars.push_back(_factory.createChar(c));
            _context.insert();
        }

        void showChar(void){
            for(std::list<Glyph *>::iterator it = _chars.begin(); it != _chars.end(); it ++){
                (*it)->draw(&_context);
            }
        }

    private:
        std::list<Glyph *> _chars;
        Context _context;
        GlyphFactory _factory;
};

#endif
