#include <stdio.h>

int main()
{
    int n = 10;
    int a[] = {20, 10, 1, 3, 40, 88, 16, 22, 49, 14};
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d\n", max);

    return 0;
}
