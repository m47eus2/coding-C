#include <stdio.h>

// Argument by reference - passing to function pointer instead of variable
// Then function can modify original value 

// Point structure
typedef struct{
    int x;
    int y;
}Point;

// Functions declatation
void addOne(int *n);
void movePoint(Point *point);

int main(){
    int x = 2;
    printf("Value of x: %d\n",x);
    addOne(&x);
    printf("Value of x: %d\n",x);

    Point point;
    point.x = 2;
    point.y = 3;
    printf("Point cords: %d,%d\n",point.x, point.y);
    movePoint(&point);
    printf("Point cords: %d,%d\n",point.x, point.y);


    return 0;
}

void addOne(int *n){
    *n += 1;
}

void movePoint(Point *point){
    // Dereferention structure and access one of its members (->)
    point->x += 1;
    point->y += 1;
}