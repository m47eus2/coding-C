#include <stdio.h>
#include <stdlib.h>

// Dynamin alocation - helps storing data without knowing the size of it
// Allocated memory can be accessed by pointer showing memory location

typedef struct{
    char *name;
    int age;
}Person;

int main(){

    Person *newPerson = (Person*)malloc(sizeof(Person));
    // Dynamically allocating memory with size of Person structure
    // Returning pointer to allocated data
    // malloc() returns void pointer (pointer without type) 

    newPerson->name = "m47eus2";
    newPerson->age = 20;

    printf("name:%s ,age:%d\n", newPerson->name, newPerson->age);

    free(newPerson);
    // Only reseases data pointer is pointing to

    return 0;
}