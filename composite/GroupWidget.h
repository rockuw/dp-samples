#ifndef GROUP_WIDGET_H
#define GROUP_WIDGET_H

class AbstractGroupWidget: public AbstractWidget
{
    public:
        AbstractGroupWidget(){}
        virtual ~AbstractGroupWidget(){
            for(std::list<AbstractWidget *>::iterator it = _chdList.begin(); it != _chdList.end(); it ++){
                delete (*it);
            }
        }

        virtual void draw(void) = 0;

        virtual void addChild(AbstractWidget *child){
            _chdList.push_back(child);
        }

        virtual void removeChild(AbstractWidget *child){
            _chdList.remove(child);
        }

        virtual std::list<AbstractWidget *> *getChdList(void){
            return &_chdList;
        }

    private:
        std::list<AbstractWidget *> _chdList;
};

class GroupBox: public AbstractGroupWidget
{
    public:
        GroupBox(){}
        ~GroupBox(){}

        void draw(void){
            std::cout << "begin drawing GroupBox" << std::endl;

            std::list<AbstractWidget *> *childList = getChdList();
            for(std::list<AbstractWidget *>::iterator it = childList->begin(); it != childList->end(); it ++){
                (*it)->draw();
            }
            std::cout << "end of drawing GroupBox" << std::endl;
        }
};

#endif
