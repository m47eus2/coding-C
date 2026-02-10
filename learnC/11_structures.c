#include <stdio.h>

// Structure - variable that contains many variables inside
struct point{
    int x;
    int y;
};

// Typedef - allow to define new variable type
typedef struct{
    int x;
    int y;
}pointType;

typedef struct{
    char *name;
    int age;
}person;


int main(){
    // Using struct
    struct point p;
    p.x = 5;
    p.y = 10;
    printf("Cords of the point p: %d,%d\n", p.x, p.y);

    // Using typedef
    pointType r;
    r.x = 3;
    r.y = 6;
    printf("Cords of the point r: %d,%d\n",r.x, r.y);

    person person1;
    person1.name = "m47eus2";
    person1.age = 20;
    printf("Person1 name: %s, age: %d\n", person1.name, person1.age);

    return 0;
}