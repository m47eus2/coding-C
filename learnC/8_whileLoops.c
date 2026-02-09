#include <stdio.h>

int main(){
    // for loop
    for(int i=0; i<10; i++){
        printf("%d",i);
    }
    printf("\n");

    // while loop
    int i=0;
    while(i<10){
        printf("%d",i);
        i++;
    }
    printf("\n");

    // Loops directives
     
    // Break - stopping loop
    i=0;
    while(1){
        printf("%d", i);
        i++;
        if(i==10){break;}
    }
    printf("\n");

    // Continue - skipping code in the loop
    for(int i=0; i<10; i++){
        if(i%2 != 0){continue;}
        printf("%d", i);
    }

    return 0;
}