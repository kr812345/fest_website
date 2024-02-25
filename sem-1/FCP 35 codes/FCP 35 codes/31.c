#include <stdio.h>

#define ROWS 4
#define COLS 4

void printUpperTriangle(int matrix[ROWS][COLS])
{
    printf("Upper Triangle of the Matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (j >= i)
            {
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    printUpperTriangle(matrix);

    return 0;
}
