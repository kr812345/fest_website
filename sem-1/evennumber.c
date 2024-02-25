#include <stdio.h>
void main(){
    int num1,num2,i;
    printf("Enter a number till you want to write even number: ");
    scanf("%d", &num1);
    for ( i = 1; i*2 <= num1; i++)
    {
        printf("%d\n",i*2);
    }

    //method-2
    printf("\nmethod-2\n");
    printf("Enter a number till you want to write even number: ");
    scanf("%d", &num2);
    i=1;
    while (i*2<=num2)
    {
        if (i*2%2 == 0)
        {
            printf("%d\n", i*2);
            i++;
        }
        
    }
    
    
}