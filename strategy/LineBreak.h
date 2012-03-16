#ifndef LINEBREAK_H
#define LINEBREAK_H

#include <string>

class LineBreak
{
    public:
        LineBreak(){}
        ~LineBreak(){}

    virtual std::string newline() = 0;
};
#endif
