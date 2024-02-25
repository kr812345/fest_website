// Swap Two variable

#include <stdio.h>

int main()
{
    // using third variable
    int a = 4;
    int b = 8;
    printf("a = %d\nb = %d\n\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("a = %d\nb = %d", a, b);

    printf("\n\n");

    // without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\nb = %d", a, b);
    return 0;
}