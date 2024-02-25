#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char result[100];

    strcpy(result, str1);
    strcat(result, str2);

    printf("The concatenated string is: %s\n", result);
    return 0;
}

// str1[] = "he";
// str2[] = "she/";
// result[];
// strcpy(result,str1);
// strcat(result, str2);
// printf("%s",result);