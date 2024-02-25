#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

void createSparseArray(int SparseArray[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << SparseArray[i][j] << " ";
        }
        cout << endl;
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

    cout << endl;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << transposedArray[j][i] << " ";
        }
        cout << endl;
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
            cout << result[i][j] << " ";
        }
        cout << endl;
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
            cout << DenseArray[i][j] << " ";
        }
        cout << endl;
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
    cout << "Setting the value of 5 at (1,1)." << endl;
    setValue(SparseArray, 1, 1, 5);
    cout << "Value at (2,2): " << getValue(SparseArray, 2, 2) << endl;
    cout << "After adding 2 at (3,3): ";
    addValue(SparseArray, 3, 3, 2);
    removeValue(SparseArray, 2, 3);
    cout << endl << "Number of rows: " << getNumRows();
    cout << endl << "Number of columns: " << getNumCols();
    cout << "Transeposed Matrix:" << endl;
    transpose(SparseArray);
    cout << "Multiplied by 8: " << endl;
    multiplyScalar(SparseArray, 8);
    cout << "Addition of two Sparse matrix:" << endl;
    add(SparseArray, Sparse_2);
    cout << "Multiplication of Two Sparse Matrix:" << endl;
    multiply(SparseArray, Sparse_2);
    cout << "Sparse Matrix to Dense Matrix:" << endl;
    int DenseArray[ROWS][COLS];
    toDenseArray(SparseArray, DenseArray);
    
    return 0;
}
