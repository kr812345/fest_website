#include <stdio.h>
int main(){
    int l,b;
    float area, perimeter;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);
    area = l*b;
    perimeter = 2*(l+b);
    if (area > perimeter)
    {
        printf("area is greater than perimeter.");
    }
    else
    {
       printf("perimeter is greater than area.");
    }
    return 0;
    
}