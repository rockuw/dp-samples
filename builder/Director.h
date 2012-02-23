#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <string>
#include "TextBuilder.h"

using namespace std;

class Director
{
    public:
        Director(TextBuilder *builder):_builder(builder){}
        ~Director(){
            delete _builder;
        }
        
        string getResult(){
            return _builder->getText();
        }

        void setTitle(const string& title){
            _builder->setTitle(title);
        }

        void addParagraph(void){
            _builder->addParagraph();
        }

        void appendText(const string& text){
            _builder->addText(text);
        }

    private:
        TextBuilder *_builder;
};

#endif
