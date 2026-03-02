#include <stdio.h>

// Replacing tabs with spaces
// Const tabs positions

/*
- Copying whole text with counting collumn position
- When tab sign finded calculate spaces to next tab position <SPACES-1 , SPACES>
- Insert spaces instead of tab
*/

#define SPACES 4

int main(void){
    int c, column, spaces, i;

    column = 0;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            putchar(c);
            column = 0;
        }
        else if(c == '\t'){
            spaces = SPACES - (column % SPACES);
            for(i = 0; i < spaces; i++){
                putchar(' ');
                column++;
            }

        }
        else{
            putchar(c);
            column++;
        }
    }
    for(i = 0; i < spaces; i++)
        putchar(' ');
        
    return 0;
}