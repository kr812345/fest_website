#include <stdio.h>

char check_credit_card();

int main(){
    check_credit_card();
    return 0;
}

char check_credit_card(){
    int card_no[16];
    int a[8];
    for (int i = 0; i < 16; i++)
    {
        scanf("%d", &card_no[i]);
    }
    for (int i = 0; i < 16; i++)
    {
        printf("%d ", card_no[i]);
    }
    
    printf("\n");

    for (int i = 16; i >= 0 && (i%2 != 0); i--)
    //{for (int j = 0; j < 8; j++)
    {
        a[i] = card_no[i];
        //if (a[j] >= 10)
          //  a[j] = a[j]-9;
    }//}
    // for (int i = 0; i < 8; i++ )
    // {
    //     printf("%d ",a[i]);
    // }
    for (int i = 16; i >= 0 && (i%2 != 0); i--)
    {    printf("%d ",a[i]);
    }
    }
    