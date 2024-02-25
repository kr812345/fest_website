#include <stdio.h>

char search(int n);

int main()
{
    int n = 4;
    printf("%c", search(n));
    return 0;
}

char search(int n)
{
    int arr[] = {1, 2, 3, 4, 23, 43, 93, 53, 34, 87, 89};

    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == n)
            return 'y';
    }
    return 'n';
}