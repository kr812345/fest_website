#include <stdio.h>
#include <stdlib.h>

// Macro definition
#define PI 3.14159

// Function Signature
float calculate_area();

int main() {
    // Function Call
    calculate_area();
}

// Function Definition
float calculate_area() {

    float area;
    float radius = 5;
    area = PI * radius * radius;

    return area; 
}

#undef PI

float calculate_circumference() {

    float circ;
    float radius = 5;
    circ = PI * radius * 2;

    return circ;
}
