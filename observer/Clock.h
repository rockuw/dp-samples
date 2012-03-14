#ifndef CLOCK_H
#define CLOCK_H

#include "Observer.h"
#include "Timer.h"
#include <cstdio>

class ColonClock: public Observer
{
    public:
        ColonClock(Timer *timer):_timer(timer){
            _timer->attach(this);
        }
        ~ColonClock(){}

        void update(Subject *source){
            if(source == _timer){
                printf("%02d:%02d:%02d\n", _timer->getHour(), _timer->getMin(), _timer->getSec());
            }
        }

    private:
        Timer *_timer;
};

class DashClock: public Observer
{
    public:
        DashClock(Timer *timer):_timer(timer){
            _timer->attach(this);
        }
        ~DashClock(){}

        void update(Subject *source){
            if(source == _timer){
                printf("%02d-%02d-%02d\n", _timer->getHour(), _timer->getMin(), _timer->getSec());
            }
        }
    private:
        Timer *_timer;
};

#endif
