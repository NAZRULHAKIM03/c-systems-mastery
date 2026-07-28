#include <stdio.h>
#include <stdlib.h>

struct SensorReading
{
    int id;
    float temperature;
    char status_code;
};

void print_sensor_log(const struct SensorReading *log, int count);

int main()
{
    int N, M;
    int actual = sizeof(int) + sizeof(float) + sizeof(char);
    int compiled = sizeof(struct SensorReading);
    int padding = compiled - actual;

    printf("\nCombined manual size : %d\n", actual);
    printf("Actual compiled size : %d\n", compiled);
    printf("Number of padding bytes : %d\n", padding);

    printf("\nHow many sensor readings do you want to allocate in RAM?: ");
    scanf("%d", &N);

    struct SensorReading *ptr = (struct SensorReading *)malloc(N * sizeof(struct SensorReading));

    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    struct SensorReading *Current = ptr;
    const struct SensorReading *end_ptr = ptr + N;

    while(Current < end_ptr)
    {
        printf("\nEnter ID : ");
        scanf("%d", &Current->id);

        printf("Enter Temperature: ");
        scanf("%f", &Current->temperature);

        printf("Enter Status Code: ");
        scanf(" %c", &Current->status_code);

        Current++;

    }

    print_sensor_log(ptr, N);

    printf("\nHow many ADDITIONAL readings do you want to add?: ");
    scanf("%d", &M);

    if(M > 0)
    {
        struct SensorReading *temp = (struct SensorReading *)realloc(ptr, (M+N) * sizeof(struct SensorReading));

        if(temp == NULL)
        {
            printf("\nFailed to Reallocate");
            return 1;
        }

        ptr = temp;
    }

    struct SensorReading *new_current = ptr + N;
    struct SensorReading *new_end_ptr = ptr + M + N;

    while(new_current < new_end_ptr)
    {
        printf("\nEnter ID : ");
        scanf("%d", &new_current->id);

        printf("Enter Temperature: ");
        scanf("%f", &new_current->temperature);

        printf("Enter Status Code: ");
        scanf(" %c", &new_current->status_code);

        new_current++;
    }

    print_sensor_log(ptr, N+M);

    free(ptr);

    return 0;
}

void print_sensor_log(const struct SensorReading *log, int count)
{
    for(int i=0; i<count; i++)
    {
        printf("\nID : %d\n", log->id);
        printf("Temp : %.2f\n", log->temperature);
        printf("Status : %c\n", log->status_code);

        log++;
    }
}