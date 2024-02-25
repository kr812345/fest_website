#include <stdio.h>
int sum_upto_n(int n);
int main(){
    int n = 10;
    int sum = sum_upto_n(n);
    printf("sum of natural number upto %d = %d",n,sum);
    return 0;
}

int sum_upto_n(int n){
    int sum = 0;
    for (int i = 0;i<=n;i++)
    {    
        sum = sum + i;
    }
    return sum;
}
