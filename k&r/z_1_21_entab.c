#include <stdio.h>

// Replacing multiple spaces with tabs
/*
- Copying chars, counting collumn and space string
- In the end of space string insert 
*/

#define SPACES 4
#define IN 1
#define OUT 0

int main(void){
    int c, i, spacesCounter, inSpaces, column;

    column = spacesCounter = 0;
    inSpaces = OUT;

    while((c = getchar()) != EOF){
        if(c == ' '){
            inSpaces = IN;
            spacesCounter++;
            if((column + spacesCounter) % SPACES == 0){
                putchar('\t');
                column += spacesCounter;
                spacesCounter = 0;
            }
        }
        else{
            if(inSpaces == IN){
                for(i = 0; i < spacesCounter; i++){
                    putchar(' ');
                    column++;
                }
                inSpaces = OUT;
                spacesCounter = 0;
                putchar(c);
            }
            else{
                putchar(c);
                column++;
            }
            if(c == '\n')
                column = 0;
        }
    }
    for(i = 0; i < spacesCounter; i++)
        putchar(' ');

    return 0;
}