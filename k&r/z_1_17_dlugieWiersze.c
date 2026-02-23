#include <stdio.h>

// Wyświetlanie wszystkich wierszy dłuższych niż 40 znaków

#define MAXLINE 1000

int ggetline(char line[]);
void copy(char buffer[], char line[]);

int main(void){
    char line[MAXLINE];
    int len;

    while((len = ggetline(line)) > 0)
        if(len >= 40)
            printf("%s",line);
    return 0;
}

int ggetline(char line[]){
    int c, i;
    for(i=0; i < MAXLINE-1 && (c = getchar()) != '\n' && c != EOF; i++)
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
    for(i=0; (buffer[i]=line[i]) != '\0'; i++);
}
