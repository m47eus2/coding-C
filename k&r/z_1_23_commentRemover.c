#include <stdio.h>

// Removes comments from input

#define TRUE 1
#define FALSE 0

/*
Multi 
Line 
Comment
*/

int main(void){
    int c, afterSlash, afterStar, inComment, ignoreLine, ignoreChar;

    afterSlash = afterStar = inComment = ignoreLine = ignoreChar = FALSE;

    while((c = getchar()) != EOF){
        // Single line comment entrace
        if(c == '/'){
            ignoreChar = TRUE;
            if(afterSlash == FALSE)
                afterSlash = TRUE;
            else{
                afterSlash = FALSE;
                ignoreLine = TRUE;
            }
        }
        else{
            if(afterSlash == TRUE && c != '*')
                putchar('/');
            afterSlash = FALSE;
        }

        // Multi line comment entrance
        if(afterSlash == TRUE && c == '*'){
            afterSlash = FALSE;
            ignoreChar = TRUE;
            inComment = TRUE;
        }

        // Single line comment exit
        if(c == '\n' && ignoreLine == TRUE)
            ignoreLine = FALSE; 
        
        // Output char
        if(ignoreLine == 0 && inComment == 0 && ignoreChar == 0)
            putchar(c);

        // Multi line comment exit
        if(inComment == TRUE){
            if(c == '*')
                afterStar = TRUE;
            if(afterStar == TRUE && c == '/'){
                afterStar = FALSE;
                inComment = FALSE;
            }
        }
        ignoreChar = FALSE;
    }
    return 0;
}