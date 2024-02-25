#include <stdio.h>

int main(){
    int num;
    float sum;
    
    printf("Please enter a positive integer upto which sum is to be calculated: ");
    scanf("%d",&num);

    for(int i = 0; i < num; i++){
        sum +=i;
    }

    printf("Sum equals to: %.1f",sum);




}