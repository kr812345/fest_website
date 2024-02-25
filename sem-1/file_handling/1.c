// Reading from a Text File
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;  // Declare a FILE pointer
    char buffer[100];  // Buffer to store read text

    file = fopen("example_1.txt", "r");  // Open the file for reading
    if (file == NULL) {  // Check if the file was opened successfully
        perror("Error opening file");  // Print an error message if file opening fails
        return EXIT_FAILURE;  // Exit the program with a failure status
    }

    // Read up to 100 characters or until a newline or EOF
    while (fgets(buffer, 100, file) != NULL) {
        printf("%s", buffer);  // Print the read string
        printf("\nBuffer will renew now...\n");
    }

    fclose(file);  // Close the file
    return 0;
}
