#include <stdio.h>

int swap_using_ptr();

int main(){
    return 0;
}

int swap_using_ptr(int a,int b){
    *a = &a;
    *b = &b;
    
}