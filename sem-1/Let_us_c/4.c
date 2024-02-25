#include <stdio.h>

int main(){
    int arr[7];
    int max; 
    for (int i=0; i < 7 ; i++ )
    {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];

    for (int i = 0; i < 7; i++)
    {
        if ( arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("Maximum Value: %d",max);
}