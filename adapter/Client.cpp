#include "Adapter.h"

void play(const CNToy& toy)
{
    toy.shuoHua();
}

int main(int argc, char *argv[])
{
    play(CNToy());
    play(CNToyAdapter(new USToy()));

    return 0;
}
