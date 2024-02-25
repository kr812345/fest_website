#include <stdio.h>

int main(){
    int n=5;
    // Showing type casting
    printf("n in float = %f \n",(float)n);
    printf("n in float = %d\n",n);
    /* here you can see that we first assign n a integer value but
    when we print it we type cast it to float data type temporarily only.
    */

    int N, SN = 26;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("your division: %f",(float)N/SN);
    return 0;
}


