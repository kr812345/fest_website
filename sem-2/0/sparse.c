#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
    int value;
} Element;

typedef struct {
    Element* elements;
    int rows;
    int cols;
    int capacity;
    int count;
} SparseArray2D;

SparseArray2D* createSparseArray2D(int rows, int cols, int capacity) {
    SparseArray2D* array = (SparseArray2D*)malloc(sizeof(SparseArray2D));
    if (array == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    array->elements = (Element*)malloc(capacity * sizeof(Element));
    if (array->elements == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    array->rows = rows;
    array->cols = cols;
    array->capacity = capacity;
    array->count = 0;
    return array;
}

void set2D(SparseArray2D* array, int row, int col, int value) {
    if (array->count >= array->capacity) {
        printf("Sparse array is full. Cannot add more elements.\n");
        return;
    }
    array->elements[array->count].row = row;
    array->elements[array->count].col = col;
    array->elements[array->count].value = value;
    array->count++;
}

int get2D(SparseArray2D* array, int row, int col) {
    for (int i = 0; i < array->count; ++i) {
        if (array->elements[i].row == row && array->elements[i].col == col) {
            return array->elements[i].value;
        }
    }
    return 0; // Default value for uninitialized elements
}

void freeSparseArray2D(SparseArray2D* array) {
    free(array->elements);
    free(array);
}

int main() {
    int rows = 4;
    int cols = 4;
    SparseArray2D* sparseArray = createSparseArray2D(rows, cols, 10);

    // Setting values
    set2D(sparseArray, 1, 1, 10);
    set2D(sparseArray, 2, 2, 20);
    set2D(sparseArray, 3, 3, 30);

    // Getting values
    printf("Value at position (1, 1): %d\n", get2D(sparseArray, 1, 1));
    printf("Value at position (2, 2): %d\n", get2D(sparseArray, 2, 2));
    printf("Value at position (3, 3): %d\n", get2D(sparseArray, 3, 3));
    printf("Value at position (2, 3): %d\n", get2D(sparseArray, 2, 3)); // Default value for uninitialized elements

    freeSparseArray2D(sparseArray);

    return 0;
}
