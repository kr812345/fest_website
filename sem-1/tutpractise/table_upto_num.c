#include <stdio.h>

int main(){
    int n,m ;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a another number: ");
    scanf("%d", &m);
    for (int i = 1; i <= m ; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}