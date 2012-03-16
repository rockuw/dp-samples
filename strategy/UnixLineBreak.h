#ifndef UNIXLINEBREAK_H
#define UNIXLINEBREAK_H

#include "LineBreak.h"

class UnixLineBreak: public LineBreak
{
    public:
        UnixLineBreak(){}
        ~UnixLineBreak(){}

        std::string newline();
};
#endif
