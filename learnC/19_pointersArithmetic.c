#include <stdio.h>

// Arithmetic pointer operations:
// Pointer incrementation (++) - increases memmory address
// Pointer decrementation (--) - decreases memmory address
// Adding/subscracting number to pointer - moving pointing memmory address

int main(){
    int array[5] = {1,2,3,4,5};

    // ++
    int *current = array;
    for(int i=0; i<5; i++){
        printf("Value: %d, Address: %x\n",*current, current);
        current++;
    }
    printf("\n");

    // --
    current = &array[4];
    for(int i=0; i<5; i++){
        printf("Value: %d, Address: %x\n",*current, current);
        current--;
    }
    printf("\n");

    // +
    current = array;
    for(int i=0; i<3; i++){
        printf("Value: %d, Address: %x\n",*current, current);
        current = current + 2;
    }
    printf("\n");

    // -
    current = &array[4];
    for(int i; i<3; i++){
        printf("Value: %d, Address: %x\n",*current, current);
        current = current - 2;
    }

    return 0;
}