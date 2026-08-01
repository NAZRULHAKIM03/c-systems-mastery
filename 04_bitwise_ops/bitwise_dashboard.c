#include <stdio.h>
#define EngineOn 1
#define Sport (1<<3)

void print_binary(unsigned char val);

int main()
{
    unsigned char dashboard = 0;

    dashboard |= EngineOn;
    dashboard |= Sport;

    print_binary(dashboard);

    dashboard &= ~EngineOn;

    print_binary(dashboard);

    dashboard ^= Sport;

    print_binary(dashboard);

    dashboard ^= Sport;

    print_binary(dashboard);

    return 0;
}

void print_binary(unsigned char val)
{
    printf("\nBinary : ");

    for (int i=7; i>=0; i--)
    {
        if (val & (1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    printf("\n");
}