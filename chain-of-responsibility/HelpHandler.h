#ifndef HELP_HANDLER_H
#define HELP_HANDLER_H

#include <string>

class HelpHandler
{
    public:
        HelpHandler(HelpHandler *parent = 0, const std::string& topic = ""):
            _parent(parent), _topic(topic){}
        virtual ~HelpHandler(){
        }

        virtual void showHelp(void){
            if(_parent){
                _parent->showHelp();
            }
        }

        virtual std::string helpMsg(void){
            return _topic;
        }

        virtual bool hasHelp(void){
            return _topic != "";
        }

    private:
        HelpHandler *_parent;
        std::string _topic;

};

#endif
