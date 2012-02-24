#ifndef TEXT_BUILDER_H
#define TEXT_BUILDER_H

#include <string>

class TextBuilder
{
    public:
        TextBuilder():_title("No Title"), _text(""){}
        virtual ~TextBuilder(){}

        virtual void setTitle(const std::string& title){ 
            _title = title;
        }

        virtual void addParagraph(void){}

        virtual void addText(const std::string& text){
            _text += text;
        }

        virtual std::string getText(){
            return _title + "\n" + _text;
        }

    protected:
        std::string _title;
        std::string _text;
};

#endif
