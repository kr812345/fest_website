#include <stdio.h>
void main()
{
    int money, m = 1, result = 1;
    printf("Choose 1 cent (1) (it doubles everyday till 30th day) or 1 million (2) (only once): ");
    scanf("%d", &money);
    if (money == 1)
    {
    while (money == 1 && m <= 30)
    {
        result = result * 2;
        m++;
    }
     printf("hurray!, you get at the end of the month: %d dollar\n", result/100);

    }
    else
    {
        printf("hurray!, you get 1000000 dollar.");
    }
    
}
