#include <stdio.h>

double power(double base, int exp) {
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else
        return 1 / power(base, -exp);
}

int main() {
    double base = 2.0;
    int exp = 3;
    printf("Power: %.4f", power(base, exp));

    return 0;
}
