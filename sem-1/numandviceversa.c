#include <stdio.h>
void main()
{
    int num, i = 1, j;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i <= num )
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    j = num;
    while (j > 0)
    {
        printf("%d ", j);
        j--;
    }

}