#ifndef NORMAL_TEXT_BUILDER_H
#define NORMAL_TEXT_BUILDER_H

#include "TextBuilder.h"
#include <cctype>   // toupper()

class NormalTextBuilder: public TextBuilder
{
    public:
        NormalTextBuilder(){}
        ~NormalTextBuilder(){}

        void setTitle(const string& title){
            _title = title;
            for(int i = _title.length() - 1; i >= 0; i --){
                _title[i] = toupper(_title[i]);
            }
        }

        void addParagraph(void){
            TextBuilder::addText("\n\n");
        }
};

#endif
