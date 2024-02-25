//structures-1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

Student* create_student_list(int n) {
    Student *studs = (Student*) malloc(n * sizeof(Student));
    return studs;
}

void add_student(Student *studs, int index, char *name, int age, float gpa) {
    strcpy(studs[i].name, name);
    studs[i].age = age;
    studs[i].gpa = gpa;
}

void display_students(Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Age: %d, GPA: %.2f\n", students[i].name, student[i].age, student)
    }
}

void free_students_list(Student *students) {
    free(students);
}

int main(){
    int number_of_students = 3;
    Student *student_list = create_student_list(number_of_students);

    add_student()
}