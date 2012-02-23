#ifndef TEXT_BUILDER_H
#define TEXT_BUILDER_H

#include <string>

using namespace std;

class TextBuilder
{
    public:
        TextBuilder():_title("No Title"), _text(""){}
        virtual ~TextBuilder(){}

        virtual void setTitle(const string& title){ 
            _title = title;
        }

        virtual void addParagraph(void){}

        virtual void addText(const string& text){
            _text += text;
        }

        virtual string getText(){
            return _title + "\n" + _text;
        }

    protected:
        string _title;
        string _text;
};

#endif
