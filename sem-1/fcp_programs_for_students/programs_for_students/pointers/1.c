#include <stdio.h>

int main() {

    int x = 10;
    int *ptr = &x;

    printf("Address of x: %p\n", (void*)&x);
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
