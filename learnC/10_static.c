#include <stdio.h>

// Global variable - can be accessed from anywhere (even outside file)

// Static variable - can be accessed anywhere inside a file

// Statuc function - can be accessed ONLY from file containing it

static int counter();

int main(){
    for(int i=0; i<5; i++){
        int value = counter();
        printf("%d\n", value);
    }
    return 0;
}

// This function can be accessed only from file containing it
static int counter(){
    static int count = 0;
    // Variable is not being removed from memory after function ends
    count++;
    return count;
}