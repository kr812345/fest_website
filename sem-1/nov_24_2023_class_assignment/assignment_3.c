#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n>=0)
    {
        printf("The number is non-negative.");
    }
    else
        printf("The number is not non-negative.");

    return 0;
    
    
}