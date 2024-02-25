// Appending to a Text File
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;  // Declare a FILE pointer
    char *text_to_append = "Appended line\n";  // Text to append to the file

    file = fopen("output_3.txt", "a");  // Open the file for appending
    if (file == NULL) {  // Check if the file was opened successfully
        perror("Error opening file");  // Print an error message if file opening fails
        return EXIT_FAILURE;  // Exit the program with a failure status
    }

    fputs(text_to_append, file);  // Append the text to the file

    fclose(file);  // Close the file
    return 0;
}
