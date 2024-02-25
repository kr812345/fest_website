#include <stdio.h>

int main(){
    int N, SN = 26;
    printf("Enter a number from 1 to 10: ");
    scanf("%d",&N);
    if (N >=1 && N <= 5)
    {
        printf("Square of SN = %d",SN*SN);
    }
    else if (N>=6 && N<=10)
    {
        if (SN%2==0)
        {
            printf("your SN is Even.");
        }
        else
        {
            printf("your SN is Odd.");
        }
        
        
    }
    
    return 0;
}



