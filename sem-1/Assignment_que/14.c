#include <stdio.h>
#include <string.h>

char palindrome(char str1, char str2);
int str_len(char str1);
char str_cat(char str1, char str2);

int main()
{

    palindrome(char str1, char str2);
    str_len(char str1);
    str_cat(char str1, char str2);
    return 0;
}

char palindrome(char str1, char str2)
{
    str1[6] = "huhhuh";
    str2[6];
    for (int i = 0; i < 6; i++)
    {
        // str2[i] = str1[5-i];
        str2 = strrev(str1);
    }
    if (str2 == str1)
        return 'a';
    else
        return 'b';
}

int str_len(char str1)
{
    str1 = "Assignment";
    int len = strlen(str1);
    printf("%d", len);
    return len;
}

char str_cat(char str1, char str2)
{
    str1[5] = "Hello";
    str2[5] = "Dosto";
    strcat(str1, str2);
    printf("%s", str1);
    return str1;
}