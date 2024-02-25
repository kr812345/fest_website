#include <stdio.h>
void main(){
    int num1,num2,i;
    printf("enter a number to write its table: ");
    scanf("%d", &num1);
    printf("Till which number you want to write table: ");
    scanf("%d", &num2);
    for ( i = 1; i <= num2; i++)
    {
        printf("%d * %d = %d\n",num1,i,num1*i);
    }
    
}