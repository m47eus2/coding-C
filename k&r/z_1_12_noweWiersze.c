#include <stdio.h>

// Umieszczanie każdego słowa ze strumienia wejściowego w nowym wierszu

#define IN 1
#define OUT 0

int main(void){
    int c, state;

    state = IN;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT){
            state = IN;
            printf("\n%c",c);
        }
        else{
            putchar(c);
        }
    }
    return 0;
}