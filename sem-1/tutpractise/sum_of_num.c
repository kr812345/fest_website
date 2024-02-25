#include <stdio.h>

int sleep();

int main(){
    int j = 0,sum = 0,num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        sum = sum + j;
        j++;
        printf("%d",j);
        if (j < num)
        {    
            printf(" ");
            printf("+");
            printf(" ");
            sleep(1);
        }
        sleep(1);
    }
    printf(" = %d", sum);
    // \nSum of number upto %d
}