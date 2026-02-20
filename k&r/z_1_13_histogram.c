#include <stdio.h>

// Wyświetlanie histogramu długości słów w danych wejściowych

#define IN 1
#define OUT 0

int main(void){
    int c, i, j, nc, state;
    int hist[100];
    
    nc = state = 0;
    state = IN;
    for(i = 0; i<100; i++)
        hist[i] = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN){
                if(nc < 101)
                    hist[nc-1]++;
                nc = 0;
            }
            state = OUT;
        }
        else{
            state = IN;
            nc++;
        }
    }

    for(i = 0; i<100; i++){
        if(hist[i] > 0){
            printf("%3d [", i+1);
            for(j = 0; j < hist[i]; j++)
                printf("=");
            printf("]\n");
        }
    }

    return 0;
}