#include <stdio.h>

void sport_mode();
void eco_mode();

int main()
{
    void (*engine_mode)();
    engine_mode = sport_mode;
    engine_mode();
    engine_mode = eco_mode;
    engine_mode();

    return 0;
}

void sport_mode()
{
    printf("V8 roaring\n");
}

void eco_mode()
{
    printf("Saving fuel\n");
}