#include <stdio.h>

int main() {
    int choice;
    printf("Choose a number between 1 and 3: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose One.\n");
            break;
        case 2:
            printf("You chose Two.\n");
            break;
        case 3:
            printf("You chose Three.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
