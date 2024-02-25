#include <stdio.h>
#include <stdlib.h>

// Define the sparse array structure
struct SparseArray {
    int row;
    int col;
    int value;
};

// Function to convert a sparse array to a dense array
int* convertSparseToDense(struct SparseArray* sparseArray, int size) {
    // Calculate the size of the dense array
    int denseSize = sparseArray[0].row * sparseArray[0].col;

    // Allocate memory for the dense array
    int* denseArray = (int*)malloc(denseSize * sizeof(int));

    // Initialize the dense array
    for (int i = 0; i < denseSize; i++) {
        denseArray[i] = 0;
    }

    // Populate the dense array with non-zero elements from the sparse array
    for (int i = 0; i < size; i++) {
        denseArray[sparseArray[i].row * sparseArray[0].col + sparseArray[i].col] = sparseArray[i].value;
    }

    return denseArray;
}

int main() {
    // Example sparse array
    struct SparseArray sparseArray[] = {
        {0, 1, 5},
        {2, 0, 9},
        {2, 2, 11},
        {3, 0, 15}
    };

    // Size of the sparse array
    int sparseSize = sizeof(sparseArray) / sizeof(sparseArray[0]);

    // Convert the sparse array to a dense array
    int* denseArray = convertSparseToDense(sparseArray, sparseSize);

    // Print the dense array
    for (int i = 0; i < 4 * 3; i++) {
        printf("%d ", denseArray[i]);
    }

    // Free the memory allocated for the dense array
    free(denseArray);

    return 0;
}