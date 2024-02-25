#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_DEVICES 1000
#define BITS_PER_CHAR 1

typedef struct {
    char array[(MAX_DEVICES + BITS_PER_CHAR - 1) / BITS_PER_CHAR];
} BitArray;
 
void set_bit(BitArray *bit_array, int index) {
    bit_array->array[index / BITS_PER_CHAR] |= (1u << (index % BITS_PER_CHAR));
}

void clear_bit(BitArray *bit_array, int index) {
    bit_array->array[index / BITS_PER_CHAR] &= ~(1u << (index % BITS_PER_CHAR));
}

int get_bit(BitArray *bit_array, int index) {
    return (bit_array->array[index / BITS_PER_CHAR] >> (index % BITS_PER_CHAR) & 1u);
}

int check_device_status(BitArray *bit_array, int device_id) {
    return get_bit(bit_array, device_id);
}

void set_device_status(BitArray *bit_array, int device_id) {
    set_bit(bit_array, device_id);
}
void clear_device_status(BitArray *bit_array, int device_id) {
    clear_bit(bit_array,device_id);
}

int main() {
    BitArray bit_array;

    for (int i = 0; i < (MAX_DEVICES + BITS_PER_CHAR - 1) / BITS_PER_CHAR; i++) {
        bit_array.array[i] = 0;
    }


set_device_status(&bit_array, 5);
set_device_status(&bit_array, 10);

printf("Device 5 status: %d\n", check_device_status(&bit_array, 5));
printf("Device 10 status: %d\n", check_device_status(&bit_array, 10));
printf("Device 60 status: %d\n", check_device_status(&bit_array, 60));

clear_device_status(&bit_array, 5);
printf("Device 5 status after clearing: %d", check_device_status(&bit_array, 5));

return 0;
}