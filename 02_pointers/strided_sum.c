#include <stdio.h>

long sum_every_nth(const int *arr, int size, int step);

int main()
{
    int num[] = {10, 20, 30, 40, 50, 60};
    int Size = 6;
    int Step = 2;
    long Answer = sum_every_nth(num, Size, Step);

    printf("Total Sum : %ld\n", Answer);

    return 0;
}

long sum_every_nth(const int *arr, int size, int step)
{
    if (arr == NULL || size <= 0 || step <=0)
    {
        return 0;
    }

    long sum = 0;
    const int *end_ptr = arr + size;

    while (arr < end_ptr)
    {
        sum += *arr;
        arr += step;
    }

    return sum;
}