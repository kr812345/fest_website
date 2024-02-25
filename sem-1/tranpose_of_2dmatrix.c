#include <stdio.h>

int main(){
    int array1[2][3];
    int array2[3][2];
    int i,j;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
    {
        scanf("%d", &array1[i][j]);
    }

    printf("\n");

    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
    {
        printf("%d ",array1[i][j]);
    }

    printf("\n");
    
    }
       
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
    {
        array2[j][i] = array1[i][j];
    }
    printf("\n");
    }

    printf("\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }

    return 0;
}