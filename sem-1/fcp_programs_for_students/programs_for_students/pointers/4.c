#include <stdio.h>

int multiply_by_two(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
        // arr[i] = arr[i] * 2
    }
    return 0;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    multiply_by_two(numbers, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
}
