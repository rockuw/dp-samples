#include "Clock.h"
#include "Timer.h"

int main(int argc, char *argv[])
{
    Timer t(1, 59, 58);
    ColonClock cc(&t);
    DashClock dc(&t);

    t.tick();
    t.tick();
    return 0;
}
