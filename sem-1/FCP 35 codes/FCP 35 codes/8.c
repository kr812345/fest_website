#include <stdio.h>

int main()
{
    int n = 10;
    int a[]={10,15,1,3,20,32,16,22,19,14};
    int sum= 0;
    
    for(int i = 1; i < n; i++)
    {
        sum += a[i];
    }
    
    printf("%d\n",sum);
    
    return 0;
}