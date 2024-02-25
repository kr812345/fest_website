#include <stdio.h>
#include <string.h>

typedef enum
{
    INT,
    FLOAT,
    CHAR,
    STRING
} DataType;

typedef union
{
    int intData;
    float floatData;
    char charData;
    char stringData[100];
} DataValue;

typedef struct
{
    DataType type;
    DataValue value;
} DataContainer;

void setData(DataContainer *container, DataType type, void *data)
{
    container->type = type;
    switch (type)
    {
    case INT:
        container->value.intData = *((int *)data);
        break;
    case FLOAT:
        container->value.floatData = *((float *)data);
        break;
    case CHAR:
        container->value.charData = *((char *)data);
        break;
    case STRING:
        strncpy(container->value.stringData, (char *)data, sizeof(container->value.stringData) - 1);
        container->value.stringData[sizeof(container->value.stringData) - 1] = '\0';
        break;
    default:
        printf("Invalid data type\n");
        break;
    }
}

void getData(DataContainer container)
{
    switch (container.type)
    {
    case INT:
        printf("Integer Data: %d\n", container.value.intData);
        break;
    case FLOAT:
        printf("Float Data: %.2f\n", container.value.floatData);
        break;
    case CHAR:
        printf("Character Data: %c\n", container.value.charData);
        break;
    case STRING:
        printf("String Data: %s\n", container.value.stringData);
        break;
    default:
        printf("Invalid data type\n");
        break;
    }
}

int main()
{
    DataContainer container;

    int intValue = 42;
    float floatValue = 3.14;
    char charValue = 'A';
    char stringValue[] = "Hello, World!";

    setData(&container, INT, &intValue);
    getData(container);

    setData(&container, FLOAT, &floatValue);
    getData(container);

    setData(&container, CHAR, &charValue);
    getData(container);

    setData(&container, STRING, stringValue);
    getData(container);

    return 0;
}
