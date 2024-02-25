// Fibonacci Sequence

#include <stdio.h>

int main(){
    int n,j=0,k=1,result = 0;
    printf("Enter a number in between 1 to 100 : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {        
        printf("%d ",result);
        j  = k ;
        k = result;
        result = j + k;
        
        
    }
    return 0;
}