#include <stdio.h>

// Recursion - Function call to itself
// Consists of two main parts:
// 1. Terminating case that ends recursion
// 2. Function calls to itself making progress to the terminating case

// Algorithms with recursion
unsigned int multiply(unsigned int x, unsigned int y);
unsigned int factorial(unsigned int x);

int main(){
    printf("%d\n", multiply(4,5));
    printf("%d\n", factorial(3));
    return 0;
}

unsigned int multiply(unsigned int x, unsigned int y){
    if(x==1){
        return y;
    }
    else{
        return y + multiply(x-1,y);
    }
}

unsigned int factorial(unsigned int x){
    if(x == 0){return 1;}
    else{
        return x*factorial(x-1);
    }
}


// Case multiply(4,5):
// 1. multiply(4,5) returns 5 + multiply(3,5) (5+15 = 20)
// 2. multiply(3,5) returns 5 + multiply(2,5) (5+10 = 15)
// 3. multiply(2,5) returns 5 + multiply(1,5) (5+5  = 10)
// 4. multiply(1,5) returns 5

// Case factorial(3):
// 1. factorial(3) returns 3 * factorial(2) (3*2 = 6)
// 2. factorial(2) returns 2 * factorial(1) (2*1 = 2)
// 3. factorial(1) returns 1 * factorial(0) (1*1 = 1)
// 4. factorial(0) returns 1