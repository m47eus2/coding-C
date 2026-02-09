#include <stdio.h>

int main(){
    // fop loop
    for(int i=0; i<10; i++){
        printf("%d", i);
    }
    printf("\n");

    // iterating on array
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(int i=0; i<10; i++){
        sum += array[i];
    }
    printf("%d\n", sum);
    return 0;
}