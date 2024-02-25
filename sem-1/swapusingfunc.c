#include <stdio.h>

//int swap_n();

int swap_n(int a,int b){

    
    int t;
    t=a;
    a=b;
    b=t;
    printf("a=%d, b=%d",a,b);
    return 0;
}

int main(){
    int a =1,b=2;
    swap_n(a,b);



    return 0;


}



