#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void countSuccessiveVowels(const char *text)
{
    int count = 0;
    int length = strlen(text);

    for (int i = 0; i < length - 1; i++)
    {
        if (isVowel(text[i]) && isVowel(text[i + 1]))
        {
            printf("%c%c\n", text[i], text[i + 1]);
            count++;
        }
    }

    printf("Number of occurrences of two successive vowels: %d\n", count);
}

int main()
{
    char line[1000];

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    countSuccessiveVowels(line);

    return 0;
}
