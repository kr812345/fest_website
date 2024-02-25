#include <stdio.h>

float celsius_to_Fahrenheit(int F,int C);

float Fahrenheit_to_celcius(int F,int C);


int main(){
    int C = 20;
    int F = 10;
    float c_to_F = celsius_to_Fahrenheit(F,C);
    printf("%d celcius in Fahrenheit = %.2f\n",C,c_to_F);
    float F_to_c = Fahrenheit_to_celcius(C,F);
    
    printf("%d Fahrenheit in celcius = %.2f\n",F,F_to_c);
    return 0;
}


float celsius_to_Fahrenheit(int F, int C){
    F = C*9/5 + 32;
    return F;
}

float Fahrenheit_to_celcius(int C,int F){
    C = (F -32)*5/9;
    return C;
}