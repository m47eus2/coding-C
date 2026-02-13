#include <stdio.h>

// Function Pointer
// void (*pointer)(int);
// *pointer -> pointer to the function
// void -> function return type
// int -> function argument type

void printValue(int val);

void printSum(int a, int b);
void printSub(int a, int b);
void printMul(int a, int b);
void printDiv(int a, int b);


int main(){
    // Function pointer
    void (*fp)(int);
    fp = printValue;

    // Calling function
    printValue(5);

    // Calling function with function pointer
    fp(10);
    printf("\n");

    // Array of functions pointers
    void (*fps[4])(int,int);
    fps[0] = printSum;
    fps[1] = printSub;
    fps[2] = printMul;
    fps[3] = printDiv;

    for(int i=0; i<4; i++){
        fps[i](4,2);
    }

    return 0;
}

void printValue(int val){
    printf("Value: %d\n", val);
}

void printSum(int a, int b){
    printf("Sum: %d\n",a+b);
}

void printSub(int a, int b){
    printf("Sub: %d\n",a-b);
}

void printMul(int a, int b){
    printf("Mul: %d\n",a*b);
}

void printDiv(int a, int b){
    printf("Div: %f\n",(float)a/(float)b);
}