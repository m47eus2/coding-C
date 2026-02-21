#include <stdio.h>

// Wyświetlanie długości wierszy w danych wejściowych

#define MAXLINE 1000

int ggetline(char line[], int maxline);
void copy(char buffer[], char line[]);

int main(void){
    int len;
    char line[MAXLINE];

    while((len = ggetline(line, MAXLINE)) > 0)
        printf("%d\n",len);

    return 0;
}

int ggetline(char line[], int maxline){
    int c, i;

    for(i=0; i < maxline-1 && (c = getchar()) != '\n' && c != EOF; i++)
        line[i] = c;
    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}