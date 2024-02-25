#include <stdio.h>

int sumdiv();

int main(){
    int n = 100;int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i < n ; i++ )
    {
        if (n%i == 0)
        {
            sum += i;
            
        }
    }
    if (sum == n)
    {   
        printf("Perfect Number.");
    }
    else
        printf("not a number.");
    return 0;
}

// int sumdiv(int n){
//     n = 100;int sum = 0;
//     for (int i = 1; i <= n ; i++ )
//     {
//         if (n%i == 0)
//         {
//             sum =+ i;
//         }
//     }
//     return sum;
// }