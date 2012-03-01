#ifndef WINDOW_H
#define WINDOW_H

#include "WindowImpl.h"
#include <cstring>

class Window
{
    public:
        Window(){
            // specify impl here   
            // could replace the code of creating WindowImpl by using an abstract factory

            const char *platform = getenv("PLATFORM");

            if (platform != 0 && strcmp(platform, "MacWindow") == 0){
                _impl = new MacWindowImpl();
            } else {
                _impl = new XWindowImpl();
            }

        }

        virtual ~Window(){
            delete _impl;
        }

        virtual void show(void){
            drawBorder();
            drawText("window");
        }

        virtual void drawBorder(void){
            _impl->drawRect(0, 0, 800, 600);
        }

        virtual void drawText(const std::string& text){
            _impl->drawText(text);
        }

    protected:
        WindowImpl *getWindowImpl(){
            return _impl;
        }

    private:
        WindowImpl *_impl;
        
};


class IconWindow: public Window
{
    public:
        IconWindow(const std::string& iconFile):_iconFile(iconFile){}
        virtual ~IconWindow(){}

        virtual void show(void){
            Window::show();
            drawIcon();
        }

        virtual void drawIcon(void){
            getWindowImpl()->drawImage(_iconFile);
        }

    private:
        std::string _iconFile;
};

class DialogWindow: public Window
{
    public:
        DialogWindow(){}
        virtual ~DialogWindow(){}

        virtual void show(void){
            Window::show();
            drawButtons();
        }

        virtual void drawButtons(void){
            getWindowImpl()->drawRect(700, 500, 50, 30); // draw a CONFIRM button
            getWindowImpl()->drawRect(760, 500, 50, 30); // draw a CANCEL button
        }
};

#endif
