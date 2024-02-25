#include <stdio.h>

int print_pattern_1();

int main()
{
    print_pattern_1(5);
    return 0;
}

int print_pattern_1(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
