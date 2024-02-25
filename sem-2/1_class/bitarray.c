#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define NOF_DEVICE 1000
#define BITS_PER_CHAR 1

struct BitArray
{
    char array[NOF_DEVICE / BITS_PER_CHAR];
};

void set_bit(struct BitArray *array, int position)
{
    array->array[position] = 1;
}

void clear_bit(struct BitArray *array)
{
    for (int i = 0; i < NOF_DEVICE / BITS_PER_CHAR; i++)
    {
        array->array[i] = 0;
    }
}

void toggle_bit(struct BitArray *array, int position)
{ // toggle_bit ka mtlb kya h?, particular bit ka change ya fir array ki sare element ka change 0 se 1 and 1 se 0
    if (array->array[position] == 1)
    {
        array->array[position] = 0;
    }
    else
    {
        array->array[position] = 1;
    }
}

void get_bit(struct BitArray *array, int position)
{
    printf("Device status: %d\n", array->array[position]);
}

void get_size(struct BitArray *array)
{
    printf("No of Devices: %d\n", NOF_DEVICE / BITS_PER_CHAR);
}

void count_set_bit(struct BitArray *array)
{
    int c = 0;
    for (int i = 0; i < NOF_DEVICE; i++)
    {
        if (array->array[i] == 1)
        {
            c++;
        }
    }
    printf("No of set Devices: %d", c);
}

void print_bit(struct BitArray *array)
{
    for (int i = 0; i < NOF_DEVICE / BITS_PER_CHAR; i++)
    {
        printf("[%d", array->array[i]);
        if (i != NOF_DEVICE / BITS_PER_CHAR)
        {
            printf(",");
        }
    }
    printf("]\n");
}

int main()
{
    struct BitArray *array;
    clear_bit(array);
    printf("BitArray: ");
    print_bit(array);
    printf("Device 5 set.\n");
    set_bit(array, 5);
    printf("Device 100 set.");
    set_bit(array, 100);
    printf("Device 999 set.");
    set_bit(array, 999);
    printf("Updated Bitarray: ");
    print_bit(array);
    printf("Change status of Device 100.\n");
    toggle_bit(array, 100);
    printf("Updated Bitarray: ");
    get_bit(array, 5);
    get_bit(array, 100);
    get_bit(array, 999);
    count_set_bit(array);
    get_size(array);
    return 0;
}
