#include <stdio.h>
#include <math.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}

float divide(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return -1;
    }
    return (float)num1 / num2;
}

float exponent(int base, int exp)
{
    return pow(base, exp);
}

void display_menu()
{
    printf("\n***** MENU *****\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exponent\n");
    printf("6. Exit\n");
}

int main()
{
    int num1, num2, choice;
    float result;

    do
    {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
            result = add(num1, num2);
            if (result != -1)
                printf("Result: %d\n", (int)result);
            break;

        case 2:
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
            result = subtract(num1, num2);
            if (result != -1)
                printf("Result: %d\n", (int)result);
            break;

        case 3:
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
            result = multiply(num1, num2);
            if (result != -1)
                printf("Result: %d\n", (int)result);
            break;

        case 4:
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
            result = divide(num1, num2);
            if (result != -1)
                printf("Result: %.2f\n", result);
            break;

        case 5:
            printf("Enter base number: ");
            scanf("%d", &num1);
            printf("Enter exponent: ");
            scanf("%d", &num2);
            result = exponent(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case 6:
            printf("Exiting the program...\n");
            break;

        default:
            printf("Invalid choice. Please choose again.\n");
        }
    } while (choice != 6);

    return 0;
}