#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <string>
#include "TextBuilder.h"

class Director
{
    public:
        Director(TextBuilder *builder):_builder(builder){}
        ~Director(){
            delete _builder;
        }
        
        std::string getResult(){
            return _builder->getText();
        }

        void setTitle(const std::string& title){
            _builder->setTitle(title);
        }

        void addParagraph(void){
            _builder->addParagraph();
        }

        void appendText(const std::string& text){
            _builder->addText(text);
        }

    private:
        TextBuilder *_builder;
};

#endif
