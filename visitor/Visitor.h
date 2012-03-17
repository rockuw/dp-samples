#ifndef VISITOR_H
#define VISITOR_H

class FloppyDisk;
class Chassis;

class Visitor
{
    public:
        virtual ~Visitor(){}

        virtual void visitFloppyDisk(FloppyDisk *floopy){}
        virtual void visitChassis(Chassis *chassis){}

    protected:
        Visitor(){}
};

#endif
