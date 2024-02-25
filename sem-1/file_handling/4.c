// Dealing with Binary Files
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float score;
} Record;

int main() {
    FILE *file;  // Declare a FILE pointer
    Record out_record = {1, 98.5}, in_record;  // Declare and initialize a Record structure

    // Writing to a binary file
    file = fopen("record.bin", "wb");  // Open the file for writing in binary mode
    if (file == NULL) {  // Check if the file was opened successfully
        perror("Error opening file");  // Print an error message if file opening fails
        return EXIT_FAILURE;  // Exit the program with a failure status
    }
    fwrite(&out_record, sizeof(Record), 1, file);  // Write the record to the file
    fclose(file);  // Close the file

    // Reading from a binary file
    file = fopen("record.bin", "rb");  // Open the file for reading in binary mode
    if (file == NULL) {  // Check if the file was opened successfully
        perror("Error opening file");  // Print an error message if file opening fails
        return EXIT_FAILURE;  // Exit the program with a failure status
    }
    fread(&in_record, sizeof(Record), 1, file);  // Read the record from the file
    printf("ID: %d, Score: %.2f\n", in_record.id, in_record.score);  // Print the read record
    fclose(file);  // Close the file

    return 0;
}
