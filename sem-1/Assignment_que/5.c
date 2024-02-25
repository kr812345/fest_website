#include <stdio.h>

int fac(int n);

int main(){
    int n = 5;
    printf("factorial of %d = %d",n,fac(n));
    return 0;
}

int fac(int n){
    int prod=1;
    for (int i = 1;i <= n; i++)
        prod = prod * i;
    return prod;
}