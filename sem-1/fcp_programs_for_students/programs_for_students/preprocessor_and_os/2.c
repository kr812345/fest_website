#include<stdio.h>

#define DEBUG

int main() {
    #ifdef DEBUG
        printf("Debugging is Enabled.\n");
        printf("Inside main()");
    #endif

    return 0;
}