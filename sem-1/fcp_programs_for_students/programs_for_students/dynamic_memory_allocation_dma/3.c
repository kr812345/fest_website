// DMA - 3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, new_size;

    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    // Allocate initial memory
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use the allocated memory
    for (i = 0; i < n; i++) {
        arr[i] = i;
    }

    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);

    // Resize the memory block
    arr = (int*) realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Use the reallocated memory
    for (i = n; i < new_size; i++) {
        arr[i] = i;
    }

    // Print the resized array
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
