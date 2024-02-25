#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidCreditCard(const char *cardNumber)
{
    int sum = 0;
    int length = strlen(cardNumber);
    int isSecond = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        if (!isdigit(cardNumber[i]))
        {
            continue;
        }

        int digit = cardNumber[i] - '0';

        if (isSecond)
        {
            digit *= 2;

            if (digit > 9)
            {
                digit = digit - 9;
            }
        }

        sum += digit;
        isSecond = !isSecond;
    }

    return (sum % 10 == 0);
}

int main()
{
    char cardNumber[20];

    printf("Enter a 16-digit credit card number: ");
    fgets(cardNumber, sizeof(cardNumber), stdin);

    if (cardNumber[strlen(cardNumber) - 1] == '\n')
    {
        cardNumber[strlen(cardNumber) - 1] = '\0';
    }

    if (strlen(cardNumber) != 16)
    {
        printf("Invalid input! Credit card number should be 16 digits.\n");
        return 1;
    }

    if (isValidCreditCard(cardNumber))
    {
        printf("The credit card number %s is valid.\n", cardNumber);
    }
    else
    {
        printf("The credit card number %s is invalid.\n", cardNumber);
    }

    return 0;
}
