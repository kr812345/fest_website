#include <stdio.h>

int main()
{
    int age;
    // By if else statement
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 1 && age <= 18)
    {
        printf("Nabalik.");
    }
    else if (age >= 19 && age <= 25)
    {
        printf("jujh rha hai.");
    }
    else if (age >= 26 && age <= 50)
    {
        printf("Margya hai.");
    }
    else
    {
        printf("Chhodo yaar.");
    }

    // By Switch case
    printf("\n\n");

    printf("Enter the age: ");
    scanf("%d", &age);

    switch (age)
    {
    case 1 ... 18:
        printf("Nabalik.");
        break;
    case 19 ... 25:
        printf("jujh rha hai.");
        break;
    case 26 ... 50:
        printf("Margya hai.");
        break;
    default:
        printf("Chhodo yaar.");
    }
    return 0;
}