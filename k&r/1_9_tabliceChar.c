#include <stdio.h>

// Wyświetlanie najdłuższego wiersza w danych wejściowych

#define MAXLINE 1000

int ggetline(char line[], int maxline);
void copy(char buffer[], char line[]);

int main(void){
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = ggetline(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0)
        printf("%s",longest);

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

void copy(char buffer[], char line[]){
    int i;
    i = 0;
    while((buffer[i] = line[i]) != '\0')
        i++;
}