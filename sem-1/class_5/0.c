#include <stdio.h>

int temp1();

int main(){
    int t = temp1();
    printf("%d",t);
    return 0;
}

int temp1(){
    int a = 2;
    int b = 0;
    return a/b;
}