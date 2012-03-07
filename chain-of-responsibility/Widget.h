#ifndef WIDGET_H
#define WIDGET_H

#include "HelpHandler.h"
#include <iostream>

class Button: public HelpHandler
{
    public:
        Button(HelpHandler *parent = 0, std::string topic = ""):
            HelpHandler(parent, topic){}
        ~Button(){}

        void showHelp(void){
            if(hasHelp()){
                std::cout << helpMsg() << std::endl;    
            } else {
                HelpHandler::showHelp();
            }
        }
};

class Dialog: public HelpHandler
{
    public:
        Dialog(HelpHandler *parent = 0, std::string topic = ""):
            HelpHandler(parent, topic){}
        ~Dialog(){}

        void showHelp(void){
            if(hasHelp()){
                std::cout << helpMsg() << std::endl;    
            } else {
                HelpHandler::showHelp();
            }
        }
};

class Application: public HelpHandler
{
    public:
        Application(){}
        ~Application(){}

        void showHelp(void){
            std::cout << "help: " << std::endl << "1. what's this?" << std::endl << "2. read more..." << std::endl;
        }
};
#endif
