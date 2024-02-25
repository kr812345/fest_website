#include <stdio.h>

struct student{
    char name[10];
    int roll_no[2];
    char branch[3];
    int age[2];
}student1, student2;

int main(){
    printf("Enter name of student1: ");
    scanf("%s\n", &student1.name);

    printf("Enter roll no of student1: ");
    scanf("%s\n", &student1.roll_no);

    printf("Enter branch of student1: ");
    scanf("%s\n", &student1.branch);

    printf("Enter age of student1: ");
    scanf("%s\n", &student1.age);
    
    printf("%s\n",&student1.name);
    printf("%s\n",&student1.roll_no);
    printf("%s\n",&student1.branch);
    printf("%s\n",&student1.age);
    return 0;
}