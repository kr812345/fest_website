#include <stdio.h>
void main()
{
    int num, i, sum;
    printf("Enter a num: ");
    scanf("%d", &num);

    printf("Trivial solution\n");
    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d can be div by 3 or 5.\n", i);
            sum = sum + i;
            
        }
    }
    printf("Final Sum: %d", sum);
}