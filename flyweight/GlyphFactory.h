#ifndef GLYPH_FACTORY_H
#define GLYPH_FACTORY_H

#include "Glyph.h"

const int NCHARS = 128;

class GlyphFactory
{
    public:
        GlyphFactory(){
            for(int i = 0; i < NCHARS; i ++){
                _character[i] = 0;
            }
        }

        virtual ~GlyphFactory(){
            for(int i = 0; i < NCHARS; i ++){
                if(_character[i]) delete _character[i];
            }
        }

        virtual Character *createChar(char c){
            if(_character[c] == 0){
                _character[c] = new Character(c);
            }
            return _character[c];
        }

    private:
        Character *_character[NCHARS];
};

#endif
