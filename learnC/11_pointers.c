#include <stdio.h>

// Pointer - integer variable holding a memory address that points to a value

int main(){
    char *name = "m47eus2";
    // Allocating local variable which is pointer to the first charakter

    printf("%s\n", name);
    printf("%c%c%c\n", name[0],name[1],name[2]);

    // Dereferencing - getting a value in specified memory address
    int a = 3;
    int *pointer = &a;

    printf("Value of a is: %d\n", *pointer);
    printf("Memory addres which pointer poits: %p\n", (void*)pointer);

    return 0;
}