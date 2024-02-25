#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("file.txt","w");
    fputs("file","Hello Dosto");
    fclose(file);
    return 0;
}