#ifndef WINLINEBREAK_H
#define WINLINEBREAK_H

#include "LineBreak.h"

class WinLineBreak: public LineBreak
{
    public:
        WinLineBreak(){}
        ~WinLineBreak(){}
    
        std::string newline();
};
#endif
