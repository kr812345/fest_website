#include <stdio.h>
int main(){

    int i=1,n=15;
    while (i<=15)
    {
        if (i<=5)
        {
            printf("I\n");
        }
        else if (i>5 && i<=10)
        {
            printf("Love\n");
        }
        else if (i>10 && i <=15)    
        {
            printf("Chahat\n");
        }
        i++;
    }
    return 0;
}