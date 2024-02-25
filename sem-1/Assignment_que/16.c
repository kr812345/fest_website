#include <stdio.h>

int fabonaci(int n);

int main(){
    int n = 5;
    printf("%d",fabonaci(n));
    return 0;
}

int fabonaci(int n)
{
    int x,y = 1,z = 0;
    if (n>0)
    {
        printf("%d %d ",x,y);
        z = x + y;
        y = z + y;
        x = z;
        return fabonaci(n - 1);
    }
    else
        return -1;
    
}