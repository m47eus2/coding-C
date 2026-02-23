#include <stdio.h>

// Odwracanie ciągu znaków 

#define MAXLEN 1000

int ggetline(char line[], int maxlen);
void reverse(char line[], int maxlen);

int main(void){
    char line[MAXLEN];

    while(ggetline(line, MAXLEN) > 0){
        reverse(line, MAXLEN);
        printf("%s",line);
    }
    return 0;
}

int ggetline(char line[], int maxlen){
    int c, i;
    for(i=0; i < maxlen-1 && (c = getchar()) != '\n' && c != EOF; i++)
        line[i] = c;
    
    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void reverse(char line[], int maxlen){
    int i, j, newLine;
    char rev[maxlen];

    for(i=0; line[i] != '\0'; i++);
    
    if(line[i-1] == '\n'){
        newLine = 1;
        i = i-2;
    }
    else{
        newLine = 0;
        i--;
    }
    
    for(j=0; i >= 0; i--){
        rev[j] = line[i];
        j++;
    }

    if(newLine){
        rev[j] = '\n';
        j++;
    }
    rev[j] = '\0';

    for(i=0; (line[i] = rev[i]) != '\0'; i++);
}