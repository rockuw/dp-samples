#ifndef HTMLVIEW_H
#define HTMLVIEW_H

#include "View.h"

class HtmlView: public View
{
    public:
        HtmlView(){}
        ~HtmlView(){}
        
        void doDisplay();
};
#endif
