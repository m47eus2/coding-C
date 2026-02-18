#include <stdio.h>

// Zastępowanie:
// tabulator -> \t
// backspace -> \b
// \ -> \\

// Testowanie:
// z_1_10_genBackSpace generuje ciąg ze znakiem cofnięcia
// ./z_1_10_genBackSpace | ./z_1_10_zastepywanieZnakowBialych przekazuje jego wyjście do aktualnego programu

int main(void){
    int c;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("\\t");
        }
        if(c == '\b'){
            printf("\\b");
        }
        if(c == '\\'){
            printf("\\\\");
        }
        if(c != '\t'){
            if(c!= '\b'){
                if(c != '\\')
                    putchar(c);
            }
        }
    }
    return 0;
}