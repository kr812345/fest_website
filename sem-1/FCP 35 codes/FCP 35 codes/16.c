#include <stdio.h>

int Fibonacci();

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");

    return 0;
}

int Fibonacci(int n)
{
    if (n <= 0)
    {
        printf("Please enter a positive integer\n");
        return -1;
    }
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
