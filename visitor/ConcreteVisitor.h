#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H

#include "Visitor.h"
#include "Equipment.h"

class PriceVisitor: public Visitor
{
    public:
        PriceVisitor():_total(0){}
        ~PriceVisitor(){}
        
        void visitFloppyDisk(FloppyDisk *floppy){
            _total += floppy->price();
        }

        void visitChassis(Chassis *chassis){
            _total += chassis->price();
        }

        double getPrice(){
            return _total;
        }
        
    private:
        double _total;
};

class PowerVisitor: public Visitor
{
    public:
        PowerVisitor():_total(0){}
        ~PowerVisitor(){}

        void visitFloppyDisk(FloppyDisk *floppy){
            _total += floppy->power();
        }

        void visitChassis(Chassis *chassis){
            _total += chassis->power();
        }

        double getPower(){
            return _total;
        }

    private:
        double _total;
};

#endif
