#include <stdio.h>
#define N 3

int** get_mat_product(int[N][N], int[N][N]);

int main() {
    int a[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int** product = get_mat_product(a, b);

    return 0;
}

int** get_mat_product(int mat_1[N][N], int mat_2[N][N]) {
    int prod_mat[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            prod_mat[i][j] = 0;
            for (int k = 0; k < N; k++) {
                prod_mat[i][j] += mat_1[i][k] * mat_2[k][j];
            }
            printf("%d ", prod_mat[i][j]);
        }
        printf("\n");
    }

    return prod_mat;
}
