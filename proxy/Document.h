#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <list>
#include "Glyph.h"

class Document
{
    public:
        Document(){}
        ~Document(){
            for(std::list<Glyph *>::iterator it = _words.begin(); it != _words.end(); it ++){
                delete (*it);
            }
        }

        void addGlyph(Glyph *glyph){
            _words.push_back(glyph);
        }

        void show(void){
            for(std::list<Glyph *>::iterator it = _words.begin(); it != _words.end(); it ++){
                (*it)->draw();
            }
        }

    private:
        std::list<Glyph *> _words;
};

#endif
