#include <stdio.h>

int calculate_diagonal_sum(int matrix[][2], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows && i < cols; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int rows = 2;
    int cols = 2;

    int sum = calculate_diagonal_sum(matrix, rows, cols);
    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}