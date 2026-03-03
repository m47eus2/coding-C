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
    printf("Hello //To nie komentarz /*To też nie komentarz*/ world!\n");

    int c, afterSlash, afterStar, inComment, ignoreLine, ignoreChar, inString, prevBackSlash;

    afterSlash = afterStar = inComment = ignoreLine = ignoreChar = inString = prevBackSlash = FALSE;

    while((c = getchar()) != EOF){
        if(c == '\"' && prevBackSlash == FALSE){
            if(inString)
                inString = FALSE;
            else
                inString = TRUE;
        }

        if(c == '\\')
            prevBackSlash = TRUE;
        else
            prevBackSlash = FALSE;

        // Comments entrance
        if(afterSlash == TRUE){
            if(c == '/')
                ignoreLine = TRUE;
            else if(c == '*')
                inComment = TRUE;
        }

        // Setting afterSlash
        if(c == '/'){
            if(inString == FALSE)
                ignoreChar = TRUE;
            if(afterStar == 0 && inString == 0) // When slash ends multiline comment it doesnt trigger potential comment start
                afterSlash = TRUE;
        }
        else{
            // Inserting / when it is not starting comment
            if(afterSlash == 1 && ignoreLine == 0 && inComment == 0)
                putchar('/');
            afterSlash = FALSE;
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