#include <stdio.h>

int sap(int n){
    if (n == 1)
    {
        return 1;
    }
    return n + sap(n-1);
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d",sap(n));
    return 0;
}