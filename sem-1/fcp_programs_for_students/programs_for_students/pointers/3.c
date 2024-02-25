#include <stdio.h>

int print_arr(int* arr, int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int main() {
    int a[6] = {1, 2, 3, 4, 5, 6};
    int *p;

    p = (void*) &a;

    print_arr(a, 6);
    print_arr(p, 6);

    printf("Value at p = %d\n", *p);
    p++;
    printf("Value at p after increment = %d\n", *p);
    printf("%p\n", (void*)p);
    p--;
    printf("Value at p after decrement = %d\n", *p);

    // Prints the memory address stored in p, which is the address of the first element
    // of the array a.
    printf("%p\n", (void*)p);

    // Dereferences p and prints the value at the address it points to,
    // which is 1 (the first element of the array).
    printf("%d\n", *p);

    // Prints the address of the array a, which is the same as the address of
    // its first element.
    printf("%p\n", a);

    // Prints the first element of the array, which is 1.
    printf("%d\n", a[0]);

    // Prints the memory address of the pointer p itself.
    printf("%p\n", &p);

    // Increments the value at which p points by 1,
    // making the first element of a now 2, and then prints it.
    printf("%d\n", ++*p);
    print_arr(a, 6);
    print_arr(p, 6);

    // Moves the pointer p to the next integer in the array (i.e., to a[1]),
    // and then prints the value there, which is 2.
    printf("%d\n", *++p);
    print_arr(a, 6);
    print_arr(p, 6);

    // Prints the value at the current location of p (which is 2),
    // and then increments p to point to the next element (a[2]).
    printf("%d\n", *p++);
    print_arr(a, 6);
    print_arr(p, 6);

    // Prints the value at the current location of p, which is now 3.
    printf("%d\n", *p);
    print_arr(a, 6);
    print_arr(p, 6);

    // Prints the value at the current location of p, which is 3,
    // and then increments p to point to the next element.
    printf("%d\n", *(p++));
    print_arr(a, 6);
    print_arr(p, 6);

    return 0;
}
