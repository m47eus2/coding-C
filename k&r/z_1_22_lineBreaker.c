#include <stdio.h>

// Breaking long lines in input data
/*
- Buffering chars with counting column and finding place to split
- Splitting last char before space / tab before max line length
*/

#define MAXLEN 10

int ggetLine(char buffer[], int maxlen);

int main(void){
    int cut, i;
    char buffer[MAXLEN + 1];

    while((cut = ggetLine(buffer, MAXLEN)) > 0){
        printf("%s", buffer);
    }

    return 0;
}

int ggetLine(char buffer[], int maxlen){
    int c, i, cut;

    cut = 0;
    for(i = 0; (c = getchar()) != '\n' && c != EOF; i++){
        buffer[i] = c;
        // Searching for last break point
        if(c == ' ' || c == '\t')
            cut = i;
        // Loop break caused by filled buffer
        if(i == maxlen-1){
            if(cut == 0){
                i++;
                buffer[i] = '\n';
            }
            else
                buffer[cut] = '\n';
            i++;
            buffer[i] = '\0';
            return i;
        }
    }
    // Loop break caused by \n or EOF
    if(c == '\n'){
        buffer[i] = c;
        i++;
    }
    buffer[i] = '\0';
    return i;
}