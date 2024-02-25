#include <stdio.h>

int main(){
    float cel,fahr,cel_new,fahr_new;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahr);

    cel_new = (fahr - 32) * 5/9;
    fahr_new = (cel * 9/5) +32;

    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n", cel, cel_new);
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius\n", fahr, fahr_new);

    
}