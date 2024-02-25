#include <stdio.h>

void countDuplicates(int arr[], int size)
{
    int count = 0;
    printf("Duplicate elements and their indices:\n");
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("Element %d at indices %d and %d\n", arr[i], i, j);
                    arr[j] = -1;
                    count++;
                }
            }
        }
    }
    printf("Total number of duplicate elements: %d\n", count);
}

int main()
{
    int array[] = {1, 2, 3, 2, 4, 5, 3, 6, 2, 7, 2};
    int size = sizeof(array) / sizeof(array[0]);

    countDuplicates(array, size);

    return 0;
}
