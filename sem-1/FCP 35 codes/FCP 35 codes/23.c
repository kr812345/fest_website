#include <stdio.h>

void updateValue(int *ptr)
{
    printf("Address of value in updateValue: %p\n", ptr);
    *ptr = 25;
}

int main()
{
    int num = 50;
    int *ptr = &num;

    printf("Address of value: %p\n", ptr);
    printf("Address of pointer: %p\n", &ptr);

    updateValue(ptr);

    printf("Updated value: %d\n", num);

    return 0;
}