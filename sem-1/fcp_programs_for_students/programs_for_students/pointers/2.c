#include <stdio.h>

int main() {
    int var_int = 5;
    float var_float = 3.14;
    char var_char = 'A';

    int *ptr_int = &var_int;
    float *ptr_float = &var_float;
    char *ptr_char = &var_char;

    printf(
        "Value of var_int = %d, pointed to by ptr_int = %d\n",
        var_int,
        *ptr_int
    );
    printf(
        "Value of var_float = %f, pointed to by ptr_float = %f\n",
        var_float,
        *ptr_float
    );
    printf(
        "Value of var_char = %c, pointed to by ptr_char = %c\n",
        var_char,
        *ptr_char
    );
}
