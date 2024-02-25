#include <stdio.h>

int swap(int *a, int *b) {
   if (a != NULL && b != NULL){
      int temp = *a;
      *a = *b;
      *b = temp;
      return 1;
   }
   else{
      return 0;
   }
}

int main() {
   int a = 5, b = 10;
   printf("Before swapping, a is %d and b is %d\n", a, b);

   swap(&a, &b);

   printf("After swapping, a is %d and b is %d\n", a, b);

   return 0;
}