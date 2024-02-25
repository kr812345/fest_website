#include <stdio.h>
void main()
{
    int n ,i,j,k,space,count=1;
    printf("Enter a number for no of rows of pyramid: ");
    scanf("%d", &n);

    space = n-1;

    for ( i = 1; i <= n; i++)
    {
        for ( j = space; j>=1 ; j--)
        {
            printf(" ");
        }

        for ( k = 1; k<=i; k++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
        space--;
        
    }
    
    
}