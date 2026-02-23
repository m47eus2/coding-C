#include<stdio.h>

// Usuwanie pustych wierszy, spacji i tabulatorów na końcu linii z danych wejściowych

#define MAXLINE 1000                                                  
#define IN 1
#define OUT 0

int ggetline(char line[]);

int main(void){
    char line[MAXLINE];
    int len;

    while((len = ggetline(line)) > 0){
        if(line[0] != '\n')
            printf("%s",line); 
    }
    return 0;
}

int ggetline(char line[]){
    int c, i, toCut;

    toCut = 0;

    for(i=0; i < MAXLINE-1 && (c = getchar()) != '\n' && c != EOF; i++){
        line[i] = c;

        if(c == ' ' || c == '\t')
            toCut++;
        else
            toCut = 0;
    }
    
    if(c == '\n'){
        line[i-toCut] = c;
        i++;
    }
    line[i-toCut] = '\0';
    return i-toCut;
}
