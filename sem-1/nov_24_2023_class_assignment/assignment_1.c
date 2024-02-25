#include<stdio.h>

int main(){
    int i;
    unsigned int ui;
    float f;
    double d;
    char c;
    char str[100];
    long lint;
    unsigned long ulint;
    long long llint;
    unsigned long long ullint;
    long double ld;
    short sint;

    printf("Enter a integer: ");
    scanf("%d", &i);
    printf("you entered %d\n, ",i);

    // %u - insigned int
    // %f - float
    // %lf - double
    // %c - char
    // %s - char[]

    return 0;

}