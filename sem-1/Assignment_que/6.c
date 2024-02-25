#include <stdio.h>

int main(){
    int arr1[9] = {1,3,45,624,56,76,234,36,345};
    int i,j;
    for (i = 0;i < 9; i++)
    {
        printf("%d ", arr1[i]);
        if (i == 8)
            printf("\n");
    }

    for (i = 0; i < 9 ; i++)
    {
        if(i%2!=0)
            printf("%d ", arr1[i]);
    }

    return 0;
}