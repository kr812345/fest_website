//topic 8 
// Structures: Functions can return structure.
// this is useful when you want to return multiple related value.
//
#include <stdio.h>

struct Point {
    int x,y;
}

struct Point get_Point(){
    struct Point p = {1,2}; // p is object of the structure Point. 
    struct Point p1 = {1,2};
    struct Point p2 = {3,2};
    printf("%d\n",p1.y);
    printf("%d\n", p2.x);
    return p;
}