#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    float score;
} Student;

void read_records() {
    FILE *file;
    Student stu;

    file = fopen("students.bin", "rb");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    printf("Reading records from students.bin:\n");
    while (fread(&stu, sizeof(Student), 1, file)) {
        printf("ID: %d, Name: %s, Score: %.2f\n", stu.id, stu.name, stu.score);
    }

    fclose(file);
}


void create_initial_records() {
    FILE *file;
    Student students[] = {
        {1, "Alice", 90.5},
        {2, "Bob", 85.0},
        {3, "Charlie", 95.5}
    };
    int size = sizeof(students) / sizeof(students[0]);

    file = fopen("students.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; i++) {
        fwrite(&students[i], sizeof(Student), 1, file);
    }

    fclose(file);
}

void modify_record(Student stud) {
    FILE *file;  // Declare a FILE pointer

    file = fopen("students.bin", "rb+");  // Open the file for reading and writing in binary mode
    if (file == NULL) {  // Check if the file was opened successfully
        perror("Error opening file");  // Print an error message if file opening fails
        exit(EXIT_FAILURE);  // Exit the program with a failure status
    }

    // Move to the record to update (second record)
    fseek(file, sizeof(Student), SEEK_SET);  // Move the file pointer to the position of the second record
    fwrite(&stud, sizeof(Student), 1, file);  // Write the updated record to the file

    fclose(file);  // Close the file

}

int main() {

    Student new_stud = {2, "Jane", 85.5};  // Initialize a Student structure

    // Creating Initial Records in the file
    create_initial_records();

    // Reading Initial Records from the file
    read_records();

    // Modifying a record in the file
    modify_record(new_stud);

    // Re-reading the records after modification
    read_records();

    return 0;
}
