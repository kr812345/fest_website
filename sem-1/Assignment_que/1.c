#include <stdio.h>

int simp_interest();

int main()
{
    int principal = 500;
    int rate = 2;
    int time = 30;
    int simp_int = simp_interest(principal, rate, time);
    printf("principal = %d rs\n", principal);
    printf("Rate = %d percent per month\n", rate);
    printf("Time = %d month\n", time);
    printf("Simple Interest = %d", simp_int);
    return 0;
}

int simp_interest(int principal, int rate, int time)
{
    int simple_interest = principal * rate * time / 100;
    return simple_interest;
}