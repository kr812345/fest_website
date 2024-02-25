#include <stdio.h>

int arrsum();

int main()
{
    arrsum();
    return 0;
}

int arrsum()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {8, 7, 6, 5, 4};
    int sum_arr[10];

    for (int i = 0; i < 5; i++)
    {
        sum_arr[i] = arr1[i] + arr2[i];
        printf("%d ", sum_arr[i]);
    }
    return 0;
}