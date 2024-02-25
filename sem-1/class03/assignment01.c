#include <stdio.h>
#define N 3

void get_matrix_product(int[N][N], int[N][N], int[N][N]);
int print_matrix(int[N][N]);

void get_matrix_product(int mat_1[N][N], int mat_2[N][N], int prod_mat[N][N]) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            prod_mat[i][j] = 0;
            for (int k = 0; k < N; k++) {
                prod_mat[i][j] += mat_1[i][k] * mat_2[k][j];
            }
        }
    }
}

int print_matrix(int mat[N][N]) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}

int main() {

    int mat_1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat_2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int prod_mat[N][N];

    get_matrix_product(mat_1, mat_2, prod_mat);
    print_matrix(prod_mat);
   
    return 0;
}