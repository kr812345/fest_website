#include <stdio.h>

int main()
{
    char a[11] = "Hello dosto";
    char b[11];
    int i;
    for (i = 0; i < 11; i++)
    {
        b[i] = a[10 - i];
        printf("%c", b[i]);
    }
    return 0;
}