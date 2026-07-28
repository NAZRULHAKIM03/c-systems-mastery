#include<stdio.h>

int max(int dat, const int *arr);
int min(int dat, const int *arr);
int avg(int dat, const int *arr);
void histo(int dat, const int *arr);

int main()
{
    int val[15] = {0};
    int datapoint = 0;
    int Max = 0, Min = 0, Avg = 0;
    printf("How many data points do you want to enter? (Max 15): ");
    scanf("%d", &datapoint);

    if(datapoint > 15 || datapoint <1)
    {
        printf("\nError : Please Enter Valid Number !!!\n");
        return 0;
    }

    printf("Enter %d values (0-100): \n", datapoint);

    for(int i=0; i<datapoint; i++)
    {
        printf("Value %d: ", i+1);
        scanf("%d", &val[i]);
    }

    Max = max(datapoint, val);
    Min = min(datapoint, val);
    Avg = avg(datapoint, val);
    printf("\n--- STATS ---\n");
    printf("Min: %d | Max: %d | Average: %d\n", Min, Max, Avg);

    printf("\n--- HISTOGRAM ---");
    histo(datapoint, val);

    return 0;
}

int max(int dat, const int *arr)
{
    int maxval=0;
    for(int i=0; i<dat; i++)
    {
        if(arr[i]>maxval)
        maxval=arr[i];
    }

    return maxval;
}

int min(int dat, const int *arr)
{
    int minval=arr[0];
    for(int i=0; i<dat; i++)
    {
        if(arr[i]<minval)
        minval=arr[i];
    }

    return minval;
}

int avg(int dat, const int *arr)
{
    int total = 0, avgval = 0;
    for(int i=0; i<dat; i++)
    {
        total += arr[i];
    }

    avgval = total/dat;

    return avgval;
}

void histo(int dat, const int *arr)
{
    int rem, ast;
    for(int i=0; i<dat; i++)
    {
        ast = 0;
        rem = 0;
        ast = arr[i]/10;
        rem = arr[i]%10;

        printf("\n[%02d] %3d:  ", i+1, arr[i]);
        for(int j=0; j<ast; j++)
        printf("*");
        if(rem >= 5)
        printf("+");
    }
    printf("\n");
}