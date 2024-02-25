#include <stdio.h>

int cheknmax(int n);

int main(){
    int n;
    printf("Max value: %d",cheknmax(n));
    return 0;
}

int cheknmax(int n){
    printf("Enter a 2 digit number: ");
    scanf("%d",&n);
    if (n > 9 && n < 100) {
        if (n/10 > n%10)
        {
            return n/10;
        }
        if (n/10 < n%10)
        {
            return n%10;
        }
    }
    else
    {
        printf("Enter a 2 digit number.");
    }
}