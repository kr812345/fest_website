#include <stdio.h>

int main(){
    int sum = 0;
    int matrix_1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",matrix_1[i][j]);
    }
    printf("\n");
    }
    
    printf("Sum of Diagonal Elements.");
    
    printf("\n");

    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
    {
        if (i=j)
        {
            sum += matrix_1[i][j];
            
        }
    }
    printf("%d",sum);
    return 0;
}