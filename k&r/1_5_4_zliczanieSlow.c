#include <stdio.h>

// Zliczanie słów, wierszy i znaków

// Stałe symboliczne flag
#define IN 1
#define OUT 0

int main(void){
    int c, nl, nw, nc, state;

    // Przypiasanie jest wyrażeniem posiadającym wartość (lewej strony po wykonaniu przypisania)
    // Kolejność przypisań - od prawej do lewej
    nl = nw = nc = 0;

    state = OUT;
    while((c = getchar()) != EOF){
        nc++;
        if(c == '\n')
            nl++;
        if(c == ' ' || c == '\n' || c == '\t') // Wyrażenia logiczne wykonywane od lewej do prawej, zatrzymywane natychmiast po ustaleniu wartości
            state = OUT;
        else if(state == OUT){
            state = IN;
            nw++;
        }
    }
    printf("Words: %d, Lines: %d, Chars: %d\n", nw, nl, nc);

    return 0;
}