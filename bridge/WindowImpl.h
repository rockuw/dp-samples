#ifndef WINDOW_IMPL_H
#define WINDOW_IMPL_H

#include <iostream>
#include <cstdio>

class WindowImpl
{
    public:
        WindowImpl(){}
        virtual ~WindowImpl(){}

        virtual void drawRect(int x, int y, int w, int h) = 0;
        virtual void drawText(const std::string& text) = 0;
        virtual void drawImage(const std::string& filename) = 0;
};

class XWindowImpl: public WindowImpl
{
    public:
        XWindowImpl(){}
        ~XWindowImpl(){}

        void drawRect(int x, int y, int w, int h){
            printf("drawing XWindow rect (%d, %d, %d, %d)... \n", x, y, w, h);
        }

        void drawText(const std::string& text){
            std::cout << "drawing XWindow text (" + text + ") ..." << std::endl;
        }

        void drawImage(const std::string& filename){
            std::cout << "drawing XWindow image (" + filename + ") ..." << std::endl;
        }
};

class MacWindowImpl: public WindowImpl
{
    public:
        MacWindowImpl(){}
        ~MacWindowImpl(){}

        void drawRect(int x, int y, int w, int h){
            printf("drawing MacWindow rect (%d, %d, %d, %d)... \n", x, y, w, h);
        }

        void drawText(const std::string& text){
            std::cout << "drawing MacWindow text (" + text + ") ..." << std::endl;
        }

        void drawImage(const std::string& filename){
            std::cout << "drawing MacWindow image (" + filename + ") ..." << std::endl;
        }
};

#endif
