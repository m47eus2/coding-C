#include <stdio.h>

// Wyświetlanie histogramu występowania znaków w danych wejściowych

int main(void){
    int c, i, j;
    int hist[256];

    for(i=0; i<256; i++)
        hist[i] = 0;

    while((c = getchar()) != EOF){
        if(c >= 0 && c <= 255)
            hist[c]++;
    }

    for(i=0; i<255; i++){
        if(hist[i] > 0){
            if(i == '\n')
                printf("\\n [");
            else if(i == '\t')
                printf("\\t [");
            else
                printf("%c  [", i);

            for(j=0; j<hist[i]; j++)
                printf("=");
            printf("]\n");
        }
    }

    return 0;
}