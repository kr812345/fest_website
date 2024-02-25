#include <stdio.h>
#include <string.h>

struct Employee
{
    int employeeID;
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct Employee employees[50];

    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; ++i)
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        employees[i].employeeID = i + 1;

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter age: ");
        scanf("%d", &employees[i].age);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Database:\n");
    printf("ID\tName\tAge\tSalary\n");
    for (int i = 0; i < numEmployees; ++i)
    {
        printf("%d\t%s\t%d\t%.2f\n", employees[i].employeeID, employees[i].name, employees[i].age, employees[i].salary);
    }

    return 0;
}
