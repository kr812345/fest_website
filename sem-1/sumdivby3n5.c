#include <stdio.h>
void main()
{
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // printf("Trivial solution");
    // for (i = 1; i <= num; i++)
    // {
    //     if (i % 3 == 0 && i % 5 == 0)
    //     {
    //         sum = sum + i;
    //     }
    // }

    printf("optimal solution:\n");
    for (i = 15; i <= num; i = i + 15)
    {
        
        printf("%d can be divisible by 3 and 5.\n",i);
        
    }
    printf("final sum: %d",i);
}