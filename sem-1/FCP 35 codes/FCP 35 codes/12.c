#include <stdio.h>

void multiply_matrices(int first_matrix[2][2], int second_matrix[2][2]) {
    int result[2][2];
    int i, j, k;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            result[i][j] = 0;
            for(k = 0; k < 2; k++) {
                result[i][j] += first_matrix[i][k] * second_matrix[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int first_matrix[2][2] = {{1, 2}, {3, 4}};
    int second_matrix[2][2] = {{5, 6}, {7, 8}};

    multiply_matrices(first_matrix, second_matrix);

    return 0;
}