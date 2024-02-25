#include <stdio.h>

int main()
{
    int n = 10;
    int a[]={10,15,1,3,20,32,16,22,19,14};
    
    for(int i = 0; i < n; i+=2)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}