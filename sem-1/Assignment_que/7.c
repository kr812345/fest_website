#include <stdio.h>

int main(){
    int p=0,q=0;
    int arr1[11] = {4,2,1,5,3,6,8,7,99,11,1};
    for (int i = 0;i<11;i++)
    {
        if (arr1[i]>arr1[i+1])
            p = arr1[i];
        else 
            q = arr1[i+1];
    }
    printf("%d,%d",p,q);
}