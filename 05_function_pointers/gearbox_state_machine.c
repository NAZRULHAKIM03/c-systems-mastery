#include <stdio.h>

void park();
void reverse();
void neutral();
void drive();

int main()
{
    void (*gear_mode[4])() = {park, reverse, neutral, drive};

    int requested_gear = 1;
    gear_mode[requested_gear]();
    requested_gear = 3;
    gear_mode[requested_gear]();

    return 0;
}

void park()
{
    printf("GEAR : P\n");
}

void reverse()
{
    printf("GEAR : R\n");
}

void neutral()
{
    printf("GEAR : N\n");
}

void drive()
{
    printf("GEAR : D\n");
}