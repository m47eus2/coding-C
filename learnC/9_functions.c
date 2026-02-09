#include <stdio.h>

// Functions declaration
int sum(int a, int b); //Returning int
void printSum(int a, int b); //Not returning value

int main(){
    printf("Sum: %d\n", sum(3,2));
    printSum(3,2);
    return 0;
}

// Functions implementation
int sum(int a, int b){
    return a+b;
}

void printSum(int a, int b){
    printf("%d\n", a+b);
}