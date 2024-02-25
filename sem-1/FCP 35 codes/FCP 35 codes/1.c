#include <stdio.h>

int main(){
    int principal, rate, time; 
    float simpleInterest;

    printf("Enter principal amount: \n");
    scanf("%d", &principal);

    printf("Enter rate of interest: \n");
    scanf("%d", &rate);

    printf("Enter time (in years): \n");
    scanf("%d", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    printf("The SI Interest is %.f\n",simpleInterest);




}