#include <stdio.h>

int main(void){
    long n;
    
    // While loop
    // n = 0;
    // while(getchar() != EOF){
    //     n++;
    // }
    // printf("%ld\n",n);

    // For loop
    for(n = 0; getchar() != EOF; n++);
    printf("%ld\n",n);

    return 0;
}