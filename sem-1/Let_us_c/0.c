#include <stdio.h>


int main(){
    int l = 1189, b = 841;
    printf("A0 = %d * %d\n",l,b);
    for (int i = 1; i < 9; i++)
    {
        if (l > b)
        {
            l = l/2;
            b = l + b;
            l = b - l;
            b = b - l;
            printf("A%d = %d * %d",i,l,b);
        } 
        else
        {
            printf("A%d = %d * %d",i,l,b);
        }

        printf("\n");
    }    
    return 0;           
}
