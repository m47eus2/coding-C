#include <stdio.h>

// Stała znakowa (charakter constant)
// 'A' -> liczba całkowita reprezentująca znak A
// "A" -> stała tekstowa (stała typu ciąg znakowy)

int main(void){
    int c, nl;

    nl=0;
    while((c = getchar()) != EOF){
        if(c == '\n')
            nl++;
    }
    printf("%d\n",nl);
    return 0;
}