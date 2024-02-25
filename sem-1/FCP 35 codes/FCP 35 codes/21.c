#include <stdio.h>

int main()
{
    int y = 3;
    int *ptr = &y;

    (*ptr)++;

    printf("Value: %d\n", *ptr);

    (*ptr)--;
    printf("Value: %d\n", *ptr);

    *ptr += 6;
    printf("Value: %d\n", *ptr);

    *ptr -= 2;
    printf("Value: %d\n", *ptr);

    int z = 6;

    int *ptr2 = &z;

    int difference = *ptr - *ptr2;

    printf("Difference = %d", difference);

    return 0;
}