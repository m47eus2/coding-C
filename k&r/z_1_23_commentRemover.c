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
    int c, afterSlash, afterStar, inComment, ignoreLine;

    afterSlash = afterStar = inComment = ignoreLine = FALSE;

    while((c = getchar()) != EOF){

        if(c == '/'){
            if(afterSlash == FALSE)
                afterSlash = TRUE;
            else{
                afterSlash = FALSE;
                ignoreLine = TRUE;
            }
        }
        if(afterSlash == TRUE && c == '*'){
            afterSlash = FALSE;
            inComment = TRUE;
        }

        if(c == '\n')
            ignoreLine = FALSE; 

        if(ignoreLine == 0 && inComment == 0)
            putchar(c);

       
        if(inComment == TRUE){
            if(c == '*')
                afterStar = TRUE;
            if(afterStar == TRUE && c == '/'){
                afterStar = FALSE;
                inComment = FALSE;
            }
        }
    }
    return 0;
}