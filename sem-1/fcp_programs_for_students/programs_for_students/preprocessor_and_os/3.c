#include<stdio.h>

#define VERSION 3

int main() {

    #if VERSION == 1
        printf("Version 1 is selected.");
    #elif VERSION == 2
        printf("Version 2 is selected.");
    #else
        printf("General version is selected.");
    #endif

}