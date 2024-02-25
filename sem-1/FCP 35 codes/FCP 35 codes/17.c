#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL)
    {
        printf("Error in opening file.\n");
        return 0;
    }

    fprintf(file, "Hello, this is a text message.\n");
    fclose(file);
    printf("Successfully wrote data to file.\n");
    return 0;
}