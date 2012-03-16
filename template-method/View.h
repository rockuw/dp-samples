#ifndef VIEW_H
#define VIEW_H

class View
{
    public:
        View(){}
        ~View(){}

        void display();
        virtual void showHeader();
        virtual void showFooter();

    private:
        virtual void doDisplay(){}
};
#endif
