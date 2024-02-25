#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10

typedef struct {
    int *array;
    int size;
    int capacity;
} List;

List* createList() {
    List* list = (List*)malloc(sizeof(List));
    list->array = (int*)malloc(sizeof(int) * INITIAL_CAPACITY);
    list->size = 0;
    list->capacity = INITIAL_CAPACITY;
    return list;
}

void resizeList(List* list) {
    list->capacity *= 2;
    list->array = (int*)realloc(list->array, sizeof(int) * list->capacity);
}

void appendToList(List* list, int x) {
    if (list->size == list->capacity)
        resizeList(list);
    list->array[list->size++] = x;
}

void extendList(List* list, int* iterable, int iterableSize) { 
    int i;
    for (i = 0; i < iterableSize; i++)
        appendToList(list, iterable[i]);
}

void insertToList(List* list, int index, int x) {
    if (index < 0 || index > list->size)
        return; 
    if (list->size == list->capacity)
        resizeList(list);
    int i;
    for (i = list->size; i > index; i--)
        list->array[i] = list->array[i - 1];
    list->array[index] = x;
    list->size++;
}

void removeFromList(List* list, int x) {
    int i, j;
    for (i = 0; i < list->size; i++) {
        if (list->array[i] == x) {
            for (j = i; j < list->size - 1; j++)
                list->array[j] = list->array[j + 1];
            list->size--;
            return;
        }
    }
}

int popFromList(List* list, int index) {
    if (index < 0 || index >= list->size)
        return -1; 
    int popped = list->array[index];
    int i;
    for (i = index; i < list->size - 1; i++)
        list->array[i] = list->array[i + 1];
    list->size--;
    return popped;
}

void clearList(List* list) {
    list->size = 0;
}

int indexOf(List* list, int x, int start, int end) {
    if (start < 0)
        start = 0;
    if (end > list->size)
        end = list->size;
    int i;
    for (i = start; i < end; i++) {
        if (list->array[i] == x)
            return i;
    }
    return -1; 
}

int countOccurences(List* list, int x) {
    int count = 0;
    int i;
    for (i = 0; i < list->size; i++) {
        if (list->array[i] == x)
            count++;
    }
    return count;
}

void sortList(List* list, int reverse) {
    int i, j, temp;
    for (i = 0; i < list->size - 1; i++) {
        for (j = 0; j < list->size - i - 1; j++) {
            if ((!reverse && list->array[j] > list->array[j + 1]) || (reverse && list->array[j] < list->array[j + 1])) {
                temp = list->array[j];
                list->array[j] = list->array[j + 1];
                list->array[j + 1] = temp;
            }
        }
    }
}

void reverseList(List* list) {
    int i, j, temp;
    for (i = 0, j = list->size - 1; i < j; i++, j--) {
        temp = list->array[i];
        list->array[i] = list->array[j];
        list->array[j] = temp;
    }
}

List* copyList(List* list) {
    List* newList = createList();
    int i;
    for (i = 0; i < list->size; i++)
        appendToList(newList, list->array[i]);
    return newList;
}

void printList(List* list) {
    int i;
    printf("[");
    for (i = 0; i < list->size; i++) {
        printf("%d", list->array[i]);
        if (i != list->size - 1)
            printf(", ");
    }
    printf("]\n");
}

int main() {
    List* myList = createList();
    appendToList(myList, 1);
    appendToList(myList, 2);
    appendToList(myList, 3);
    appendToList(myList, 4);
    printf("Original List: ");
    printList(myList);
    insertToList(myList, 2, 10);
    printf("After Insertion: ");
    printList(myList);
    removeFromList(myList, 3);
    printf("After Removal: ");
    printList(myList);
    printf("Popped: %d\n", popFromList(myList, 1));
    printf("After Pop: ");
    printList(myList);
    sortList(myList, 0);
    printf("After Sorting: ");
    printList(myList);
    reverseList(myList);
    printf("After Reversing: ");
    printList(myList);
    List* newList = copyList(myList);
    printf("Copied List: ");
    printList(newList);
    clearList(myList);
    printf("After Clearing: ");
    printList(myList);
    return 0;
}
