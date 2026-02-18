#include <stdio.h>

// Prznoszenie wejścia na wyjście, zastępując wiele spacji pojedynczą spacją

int main(void){
    int c, space;

    space = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            if(space == 0){
                putchar(c);
                space = 1;
            }
        }
        if(c != ' '){
            putchar(c);
            space = 0;
        }
    }
    return 0;
}