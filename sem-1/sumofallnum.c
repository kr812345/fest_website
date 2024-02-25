#include <stdio.h>
void main()
{
    int n, i = 0, result;
    printf("Write a number to get its sum from 1 to n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        result = result + i;
        i++;
    }
    printf("sum of 1st n numbers: %d", result);
}