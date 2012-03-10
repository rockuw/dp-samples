#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "Widget.h"

class Mediator
{
    public:
        Mediator(){}
        virtual ~Mediator(){}

        virtual void showWidgets() = 0;
        virtual void widgetChanged(Widget *) = 0;

    protected:
        virtual void createWidgets() = 0;
};

class DialogDirector: public Mediator
{
    public:
        DialogDirector(){}
        ~DialogDirector(){
            delete _btn;
            delete _listBox;
            delete _textBox;
        }
        
        void showWidgets(){
            createWidgets();
            std::cout << "show widgets" << std::endl;
            _btn->clicked();
        }
    
        void createWidgets(){
            _btn = new Button(this);
            _listBox = new ListBox(this);
            _textBox = new TextBox(this);
        }

        void widgetChanged(Widget *w){
            if(w == _btn){
                _textBox->setText(_listBox->getSelection());
            } else {
            }
        }

    private:
        Button *_btn;
        ListBox *_listBox;
        TextBox *_textBox;
};

#endif
