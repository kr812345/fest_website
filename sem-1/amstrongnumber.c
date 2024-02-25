#include <stdio.h>
void main()
{
    int i, j, k, sum, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (sum = 0, k = i; i > 0;)
        {
            j = k % 10;
            sum = sum + j * j * j;
            k = k / 10;
        }
        if (sum == i)
            printf("\n %d", i);
    }
}
