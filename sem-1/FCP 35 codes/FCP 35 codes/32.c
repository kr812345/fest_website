// #include <stdio.h>
// #include <stdlib.h>

// int compare(const void *a, const void *b)
// {
//     char str1[20], str2[20];

//     sprintf(str1, "%d", *((const int *)a));
//     sprintf(str2, "%d", *((const int *)b));

//     char order1[40], order2[40];
//     sprintf(order1, "%s%s", str1, str2);
//     sprintf(order2, "%s%s", str2, str1);

//     return strcmp(order2, order1);
// }

// void printLargestInteger(int arr[], int n)
// {
//     qsort(arr, n, sizeof(int), compare);

//     printf("The largest integer: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int A[] = {944, 9, 0, 45};
//     int size = sizeof(A) / sizeof(A[0]);

//     printLargestInteger(A, size);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000

// Function to compare two integers when sorting
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

// Function to concatenate two integers
int concatenate(int a, int b) {
    int temp = b;
    while (temp > 0) {
        a *= 10;
        temp /= 10;
    }
    return a + b;
}

// Function to find the largest integer from an array of integers
void findLargestInteger(int arr[], int n) {
    qsort(arr, n, sizeof(arr[0]), compare);

    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = concatenate(result, arr[i]);
    }

    printf("The largest integer that can be made is: %d\n", result);
}

int main() {
    int n;
    printf("Enter the number of integers in the array (up to 10000): ");
    scanf("%d", &n);

    int arr[MAX_SIZE];
    printf("Enter %d distinct integers between 0 and 10000:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLargestInteger(arr, n);

    return 0;
}
