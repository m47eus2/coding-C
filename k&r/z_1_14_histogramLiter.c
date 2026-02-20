#include <stdio.h>

// Wyświetlanie histogramu występowania znaków w danych wejściowych

int main(void){
    int c, i, j;
    int hist[52];

    for(i=0; i<52; i++)
        hist[i] = 0;

    while((c = getchar()) != EOF){
        if(c >= 'A' && c <= 'z')
            hist[c - 'A']++;
    }

    for(i=0; i<52; i++){
        if(hist[i] > 0){
            printf("%c [", i+'A');
            for(j=0; j<hist[i]; j++)
                printf("=");
            printf("]\n");
        }
    }

    return 0;
}