#include <stdio.h>

int main() {
    int array[10] = {2,3,1,42,6,4,8,12,9,0};
    int sorted_arr[10];
    int n = 10;
    int min_valu = array[0];
    for (int i = 0; i < n; i++) {
          if ( array[i] < min_valu) {
            min_valu = array[i];
            array[i] = min_valu;
            printf("%d",array[i]);
          }
    }
    return 0;
}