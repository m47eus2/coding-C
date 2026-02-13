#include <stdio.h>

// Union - struct that has common memmory for all variables
// Union has memmory of the largest variable
// It can uses ony one varialbe at the time (variable with multiple types!)

// Showing each byte of the int variable
union intParts{
    int Int;
    char bytes[sizeof(int)];
};

// Alias for each element of numbers
union aliases{
    int numbers[4];
    struct{
        int number1;
        int number2;
        int number3;
        int number4;
    };
};

// Struct that can store multiple types
struct operator{
    int type;
    union{
        int intNum;
        float floatNum;
        double doubleNum;
    };
};

int main(){
    //Showing each byto of the int variable
    union intParts parts;
    parts.Int = 78364;

    int number = 78364;

    // Printing bytes of the int with union
    printf("Int: %d, bytes: %d %d %d %d\n",
    parts.Int,parts.bytes[0],parts.bytes[1],parts.bytes[2],parts.bytes[3]);

    // Printing bytes of the int with pointers
    printf("Int: %d, bytes: %d %d %d %d\n",
    number,*((char*)&number), *((char*)(&number)+1),*((char*)(&number)+2),*((char*)(&number)+3));
    printf("\n");
    

    // Alias for each element of numbers array
    union aliases al;
    al.number1 = 5;
    al.number2 = 10;
    al.number3 = 15;
    al.number4 = 20;
    
    for(int i=0; i<4; i++){
        printf("%d\n",al.numbers[i]);
    }
    printf("\n");

    // Struct that can store multiple types
    struct operator op;
    op.type = 0;
    op.intNum = 35;

    struct operator op2;
    op2.type = 1;
    op2.floatNum = 1.5;

    printf("op stores int %d, op2 stores float: %f\n",op.intNum, op2.floatNum);
    
    return 0;
}