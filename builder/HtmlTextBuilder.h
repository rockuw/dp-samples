#ifndef HTML_TEXT_BUILDER_H
#define HTML_TEXT_BUILDER_H

#include "TextBuilder.h"

class HtmlTextBuilder: public TextBuilder
{
    public:
        HtmlTextBuilder():_header(""), _footer(""){}
        ~HtmlTextBuilder(){}

        void addParagraph(void){
            TextBuilder::addText("\n<p>\n");
        }

        std::string getText(){
            setHeaderFooter();
            return _header + "\n" + _text + "\n" + _footer;
        }

    private:
        std::string _header, _footer;
        void setHeaderFooter(){
            _header = "<html><head><title>"
                + _title + "</title></head>"
                + "<body>";
            _footer = "</body></html>";
        }
};

#endif
