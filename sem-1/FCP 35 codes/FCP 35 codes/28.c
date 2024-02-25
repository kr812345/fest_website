#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}

typedef int (*ArithmeticFunc)(int, int);

int main()
{
    int a = 10, b = 5;

    ArithmeticFunc operations[4] = {&add, &subtract, &multiply, &divide};

    printf("Performing arithmetic operations on %d and %d\n", a, b);
    printf("Addition: %d\n", operations[0](a, b));
    printf("Subtraction: %d\n", operations[1](a, b));
    printf("Multiplication: %d\n", operations[2](a, b));
    printf("Division: %d\n", operations[3](a, b));

    return 0;
}
