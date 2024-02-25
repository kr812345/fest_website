#include <stdio.h>

int main(){
    float fact = 1;
    float num;

    printf("Enter a non negative number:");
    scanf("%f",&num);

    for (int i = 1; i <= num; ++i){
        fact *= i;
    }

    printf("The factorial of the given number is %f",fact);



}