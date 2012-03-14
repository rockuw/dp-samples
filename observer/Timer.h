#ifndef TIMER_H
#define TIMER_H

#include "Subject.h"

class Timer: public Subject
{
    public:
        Timer(int h, int m, int s):_hour(h), _min(m), _sec(s){}
        ~Timer(){}

        int getHour(void){
            return _hour;
        }

        int getMin(void){
            return _min;
        }

        int getSec(void){
            return _sec;
        }

        void tick(void){
            int carry = 1;
            _sec += carry;
            if(_sec >= 60) _sec = 0;
            else carry = 0;
            _min += carry;
            if(_min >= 60) _min = 0;
            else carry = 0;
            _hour += carry;

            Subject::notify();
        }
    private:
        int _hour, _min, _sec;
};

#endif
