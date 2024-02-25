#include <stdio.h>
#include <unistd.h>

int main(){

    int n_sec,i;
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &n_sec);

    for ( i = n_sec; i >= 0; i--)
    {
        printf("\rCountdown: %d",i);
        fflush(stdout);
        sleep(1);
    }
    printf("\n\n Time's up!!\n");
    

    return 0;
}