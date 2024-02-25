// Writing to a Text File
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;  // Declare a FILE pointer
    char *lines[] = {"First line\n", "Second line\n", "Third line\n"};  // Array of strings to write
    int size = sizeof(lines) / sizeof(lines[0]);  // Calculate the number of lines

    file = fopen("output_2.txt", "w");  // Open the file for writing
    if (file == NULL) {  // Check if the file was opened successfully
        perror("Error opening file");  // Print an error message if file opening fails
        return EXIT_FAILURE;  // Exit the program with a failure status
    }

    for (int i = 0; i < size; i++) {  // Loop through the lines
        fputs(lines[i], file);  // Write each line to the file
    }

    fclose(file);  // Close the file
    return 0;
}
