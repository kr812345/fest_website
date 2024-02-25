#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_pointer = fopen("file.txt", "r");

    if (file_pointer == NULL)
    {
        printf("Could not open file. \n");
        exit(0);
    }

    char buffer[100];
    while ((fgets(buffer, 100, file_pointer)) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(file_pointer);

    return 0;
}