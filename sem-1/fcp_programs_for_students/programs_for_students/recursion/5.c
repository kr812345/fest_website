// Tail vs Non-tail recursion using Factorial
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

unsigned long long factorial_tail_rec(int n, unsigned long long accumulator) {
    if (n <= 1) {
        return accumulator;
    }
    else {
        return factorial_tail_rec(n - 1, n * accumulator);
    }
}

int main() {
    int n = 5;

    printf("%llu", factorial(n));
    printf("\n");
    printf("%llu", factorial_tail_rec(n, 1));

    return 0;
}
