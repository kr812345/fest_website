#include <stdio.h>

void findAverage(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Average: %.2f\n", (float)sum / n);
}

void findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Max: %d\n", max);
}

void findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Min: %d\n", min);
}

int main()
{
    int arr[] = {10, 40, 30, 50, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    findAverage(arr, n);
    findMax(arr, n);
    findMin(arr, n);

    return 0;
}
