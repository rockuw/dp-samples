#ifndef EDITOR_H
#define EDITOR_H

#include <string>
#include "LineBreak.h"

class Editor
{
    public:
        Editor(LineBreak *lr):_linebreak(lr), _content(""){}
        ~Editor();
        
        void keyPressed(const char c);
        void show();

    private:
        LineBreak *_linebreak;
        std::string _content;

        void append(const char c);
        void append(const std::string& str);
};
#endif
