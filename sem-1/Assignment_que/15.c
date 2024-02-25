#include <stdio.h>

int fact();
int calc_ncr();

int main()
{
    int n, r;
    printf("n = ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);
    printf("ncr = %d", calc_ncr(n, r));
    return 0;
}

int fact(int n)
{
    int i, prod = 1;
    for (i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    return prod;
}

int calc_ncr(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));

    return ncr;
}