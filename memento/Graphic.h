#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <string>

class Graphic
{
    public:
        Graphic(const std::string& name, double x = 0, double y = 0):
            _x(x), _y(y), _name(name)
        {}
        ~Graphic(){}

        void move(double dx, double dy){
            _x += dx;
            _y += dy;
        }
        
        std::string getName(void){
            return _name;
        }
        
        double getX(void){
            return _x;
        }

        void setX(double x){
            _x = x;
        }

        void setY(double y){
            _y = y;
        }

        double getY(void){
            return _y;
        }

    private:
        double _x, _y;
        std::string _name;
};

#endif
