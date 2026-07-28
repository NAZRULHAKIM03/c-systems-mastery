#include<stdio.h>

void reverse_string(char *str);

int main()
{
    char word[100];

    printf("Enter Word To Be Reversed: ");
    scanf("%99s", word);

    reverse_string(word);

    return 0;
}

void reverse_string(char *str)
{
    if (str == NULL || *str == '\0')
    {
        return;
    }
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        char temp;
        temp = *start;
        *start = *end;
        *end = temp;
        end--;
        start++;
    }

    printf("Reversed Word : %s\n", str);
}