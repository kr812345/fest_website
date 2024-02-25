#include <stdio.h>

int main(){
    int num;

    printf("Enter the number to be checked: ");
    scanf("%d",&num);

    if(num % 2 ==0){
        printf("The number is an even number");
    }

    else{
        printf("The number is odd number");
    }



}