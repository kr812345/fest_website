#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct Person
{
    char name[MAX_SIZE];
    char address[MAX_SIZE];
};

void swap(struct Person *a, struct Person *b)
{
    struct Person temp = *a;
    *a = *b;
    *b = temp;
}

void sortNames(struct Person people[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(people[j].name, people[j + 1].name) > 0)
            {
                swap(&people[j], &people[j + 1]);
            }
        }
    }
}

void readData(struct Person people[], int n)
{
    printf("Enter names and addresses:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", people[i].name);
        printf("Enter address %d: ", i + 1);
        scanf("%s", people[i].address);
    }
}

void printData(struct Person people[], int n)
{
    printf("\nSorted names and addresses:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %-20s Address: %s\n", people[i].name, people[i].address);
    }
}

int main()
{
    int n;

    printf("Enter the number of people: ");
    scanf("%d", &n);

    struct Person people[MAX_SIZE];

    readData(people, n);
    sortNames(people, n);
    printData(people, n);

    return 0;
}
