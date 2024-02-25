#include <stdio.h>
#include <unistd.h>

int main(){

    int n_sec,i;
    char j = 'I';
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &n_sec);

    for ( i = n_sec; i > 0; i--)
    {
        printf("\rCountdown: %d\n",i);
        printf(" I");
        printf(" love");
        //printf("\n\n Time's up!!\n");
        fflush(stdout);
        sleep(1);
        printf(" you");
        
    
    }
    

    return 0;
}