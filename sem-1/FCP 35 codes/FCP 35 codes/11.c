#include <stdio.h>

void add_matrices(int first_matrix[2][2], int second_matrix[2][2]) {
    int result[2][2];
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            result[i][j] = first_matrix[i][j] + second_matrix[i][j];
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

    add_matrices(first_matrix, second_matrix);

    return 0;
}