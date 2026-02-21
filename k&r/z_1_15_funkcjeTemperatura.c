#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr2cels(int fahr);

int main(void){
    int i;

    printf("Fahr  Cels\n");
    printf("----------\n");
    for(i=0; i<=UPPER; i += STEP)
        printf("%3d %6.1f\n", i, fahr2cels(i));

    return 0;
}

float fahr2cels(int fahr){
    return (5.0/9.0) * (fahr-32.0);
}