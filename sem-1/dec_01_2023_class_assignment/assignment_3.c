#include <stdio.h>

int main()
{
    int i, j, num = 5;
    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}