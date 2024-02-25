#include <stdio.h>

int print_pattern_4();

int main()
{
    
    print_pattern_4(5);

    return 0;
}


int print_pattern_4(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}