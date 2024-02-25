#include <stdio.h>
int print_pattern_3(int num_ast)
{
    for(int i=1;i<=num_ast;i++){
        for(int j=1;j<=num_ast;j++){
            if(j<=num_ast-i){
                printf(" ");
            
            }
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main(){
       print_pattern_3(10);
       return 0;

}
