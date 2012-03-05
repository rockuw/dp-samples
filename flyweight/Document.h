#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <list>
#include "GlyphFactory.h"
#include "Context.h"

class Document
{
    public:
        Document(){}
        ~Document(){}

        void addChar(char c){
            _chars.push_back(_factory.createChar(c));
            _context.insert();
        }

        void addGlyph(Glyph *glyph){
            _chars.push_back(glyph);
            _context.insert();
        }

        void show(void){
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
