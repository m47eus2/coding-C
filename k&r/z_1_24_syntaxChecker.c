#include <stdio.h>

/* Checking simple sintax errors in C code
- Every bracket closed
- Every quotation closed 
*/

int main(void){
    int c, bOpen, bClose, b1Open, b1Close, b2Open, b2Close, inString, br, doubleBr, backSl, ignoreChar;

    bOpen = bClose = b1Open = b1Close = b2Open = b2Close = inString = br = doubleBr = backSl = ignoreChar = 0;

    while((c = getchar()) != EOF){
        putchar(c);

        // String mode
        if(backSl == 0){
            if(c == '\''){
                if(inString == 0){
                    inString = 1;
                    printf("<S1>");
                }
                else if(inString == 1){
                    inString = 0;
                    ignoreChar = 1;
                    printf("<S0>");
                }
            }
            else if(c == '\"'){
                if(inString == 0){
                    inString = 2;
                    printf("<S2>");
                }
                else if(inString == 2){
                    inString = 0;
                    ignoreChar = 1;
                    printf("<S0>");
                }
            }
        }

        // Logging chars
        if(inString == 0){
            if(c == '(') bOpen++;
            else if(c == ')') bClose++;
            else if(c == '[') b1Open++;
            else if(c == ']') b1Close++;
            else if(c == '{') b2Open++;
            else if(c == '}') b2Close++;
            else if(c == '\'') br++;
            else if(c == '\"') doubleBr++;
        }
        
        // Marks backslash sign
        if(c == '\\'){
            if(backSl == 0) backSl = 1;
            else if(backSl == 1) backSl = 0;
        }
        else backSl = 0;

        // Reseting ignoreChar
        ignoreChar = 0;
    }

    printf("Results:\n");

    printf("Circle brackets opened: %d, closed: %d [", bOpen, bClose);
    if(bOpen == bClose) printf("PASSED]\n");
    else printf("FAILED]\n");

    printf("Square brackets opened: %d, closed %d [", b1Open, b1Close);
    if(b1Open == b1Close) printf("PASSED]\n");
    else printf("FAILED]\n");

    printf("Strange brackets opened: %d, closed: %d [", b2Open, b2Close);
    if(b2Open == b2Close) printf("PASSED]\n");
    else printf("FAILED]\n");

    return 0;
}