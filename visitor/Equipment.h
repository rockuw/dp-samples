#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
#include <list>
#include "Visitor.h"

class Equipment
{
    public:
        Equipment(const std::string& name):_name(name){}
        virtual ~Equipment(){}
        
        virtual std::string getName(){
            return _name;
        }

        virtual double power() = 0;
        virtual double price() = 0;
        virtual void accept(Visitor&) = 0;

    private:
        std::string _name;
};


class FloppyDisk: public Equipment
{
    public:
        FloppyDisk():Equipment("FloppyDisk"){}
        ~FloppyDisk(){}
        
        double power(){
            return 100.0;
        }

        double price(){
            return 199.0;
        }

        void accept(Visitor& visitor){
            visitor.visitFloppyDisk(this);
        }
};

class Chassis: public Equipment
{
    public:
        Chassis():Equipment("Chassis"){}
        ~Chassis(){
        }

        void addPart(Equipment *eq){
            _parts.push_back(eq);
        }

        void removePart(Equipment *eq){
            _parts.remove(eq);
        }

        double power(){
            // the chassis consumes additional 10W power
            return 10.0;
        }

        double price(){
            // the price of the chassis itself
            return 299.0;
        }

        void accept(Visitor& visitor){
            for(std::list<Equipment *>::iterator it = _parts.begin(); it != _parts.end(); it ++){
                (*it)->accept(visitor);
            }
            visitor.visitChassis(this);
        }

    private:
        std::list<Equipment *> _parts;
};

#endif
