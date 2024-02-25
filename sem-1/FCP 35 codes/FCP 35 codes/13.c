#include <stdio.h>

void reverse(char str[], int length)
{
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[] = "Hello World!";
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    reverse(str, length);

    printf("Reversed String is: %s\n", str);

    return 0;
}