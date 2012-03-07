#ifndef INVOKER_H
#define INVOKER_H

#include "Command.h"
#include <list>

class Invoker
{
    public:
        Invoker(){}
        ~Invoker(){}
        
        void invoke(Command *cmd){
            cmd->execute();
            _cmdHistory.push_back(cmd);
        }

        void undo(void){
            if(_cmdHistory.empty()) return;
            Command *cmd = _cmdHistory.back();
            _cmdHistory.pop_back();
            cmd->undo();
        }

    private:
        std::list<Command *> _cmdHistory;
};

#endif
