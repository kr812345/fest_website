#include <stdio.h>

#define ROWS 3
#define COLS 4

void createSparseArray(int SparseArray[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", SparseArray[i][j]);
        }
        printf("\n");
    }
}

void setValue(int SparseArray[ROWS][COLS], int i, int j, int value) {
    SparseArray[i][j] = value;
}

int getValue(int SparseArray[ROWS][COLS], int i, int j) {
    return SparseArray[i][j];
}

void addValue(int SparseArray[ROWS][COLS], int i, int j, int value) {
    SparseArray[i][j] += value;
}

void removeValue(int SparseArray[ROWS][COLS], int i, int j) {
    SparseArray[i][j] = 0;
}

int getNumRows() {
    return ROWS;
}

int getNumCols() {
    return COLS;
}

void transpose(int SparseArray[ROWS][COLS]) {
    int transposedArray[COLS][ROWS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposedArray[j][i] = SparseArray[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ",transposedArray[j][i]);
        }
        printf("\n");
    }
}   

    

void multiplyScalar(int SparseArray[ROWS][COLS], int factor) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            SparseArray[i][j] *= factor;
        }
    }
}

void add(int SparseArray[ROWS][COLS], int Sparse_2[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            SparseArray[i][j] += Sparse_2[i][j];
        }
    }
}

void multiply(int SparseArray[ROWS][COLS], int Sparse_2[ROWS][COLS]) {
    int result[ROWS][COLS] = {0}; 
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < COLS; k++) {
                result[i][j] += SparseArray[i][k] * Sparse_2[k][j];
            }
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ",result[i][j]);
        }
        printf("\n");  
    }
}

void toDenseArray(int SparseArray[ROWS][COLS], int DenseArray[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (SparseArray[i][j] != 0) {
                DenseArray[i][j] = SparseArray[i][j];
            }
        }
    }
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ",DenseArray[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int SparseArray[ROWS][COLS] = {
        {0, 1, 0, 0},
        {2, 0, 0, 4},
        {1, 0, 0, 0}
    };
    
    int Sparse_2[ROWS][COLS] = {
        {0, 2, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 9, 0}
    };
    
    createSparseArray(SparseArray);
    printf("Setting the value of 5 at (1,1).\n");
    setValue(SparseArray, 1, 1, 5);
    printf("Value at (2,2): %d\n", getValue(SparseArray, 2, 2));
    printf("After adding 2 at (3,3): ");
    addValue(SparseArray, 3, 3, 2);
    removeValue(SparseArray, 2, 3);
    printf("\nNumber of rows: %d", getNumRows());
    printf("\nNumber of columns: %d", getNumCols());
    printf("Transeposed Matrix:\n");
    transpose(SparseArray);
    printf("Multiplied by 8: \n");
    multiplyScalar(SparseArray, 8);
    printf("Addition of two Sparse matrix:\n ");
    add(SparseArray, Sparse_2);
    printf("Multiplication of Two Sparse MAtrix:\n ");
    multiply(SparseArray, Sparse_2);
    printf("Sparse MAtrix to Dense Matrix: \n");
    int DenseArray[ROWS][COLS];
    toDenseArray(SparseArray, DenseArray);
    
    return 0;
}
