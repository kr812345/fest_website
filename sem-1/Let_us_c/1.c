#include <stdio.h>

int main()
{
    int N = 599;
    int sum = 599;
    int h = N/100;
        N = N%100;
    int f = N/50;
        N = N-50;
    int t = N/10;
        N = N%10;
    int fi = N/5;
        N = N-5;
    int tn = N/2;
        N = N-2;
    int one = N/1;
    printf("Notes of 100 = %d\nNotes of 50 = %d\nNotes of 10 = %d\nNotes of 5 = %d\nNotes of 2 = %d\nNotes of 1 = %d\nThese are the minimun notes to carry when you have sum money = %d\n",h,f,t,fi,tn,one,sum);
    
}