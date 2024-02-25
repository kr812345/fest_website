#include <stdio.h>

int main()
{
    int num1,num2,temp;
    
    printf("Enter number 1: ");
    scanf("%d",&num1);
    
    printf("Enter number 1: ");
    scanf("%d",&num2);
    
    printf("Numbers before swapping is Number 1=%d and Number 2=%d\n",num1,num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("Numbers after swapping is Number 1=%d and Number 2=%d\n",num1,num2);

    return 0;
}