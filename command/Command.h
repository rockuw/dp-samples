#ifndef COMMAND_H
#define COMMAND_H

#include "Data.h"
#include <list>

class Command
{
    public:
        Command(){}
        virtual ~Command(){}

        virtual void execute(void) = 0;
        virtual void undo(void) = 0;
};

class AddCommand: public Command
{
    public:
        AddCommand(Data *data):_data(data){}
        ~AddCommand(){}

        void execute(void){
            _data->add();
        }

        void undo(void){
            _data->sub();
        }

    private:
        Data *_data;
};

class SubCommand: public Command
{
    public:
        SubCommand(Data *data):_data(data){}
        ~SubCommand(){}

        void execute(void){
            _data->sub();
        }

        void undo(void){
            _data->add();
        }

    private:
        Data *_data;
};

#endif
