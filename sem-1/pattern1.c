#include<stdio.h>
int print_pattern_2(int num_ast){
    int k=0;
    for(int i=1;i<=num_ast;i++){
        i<=5?k++:k--;
        for(int j=1;j<=5;j++){
            if(j<=k)
              printf("* ");
            else
               printf(" ");
        }
        printf("\n");
    } 
    return 0;
}
int main(){
    print_pattern_2(9);
    return 0;
}