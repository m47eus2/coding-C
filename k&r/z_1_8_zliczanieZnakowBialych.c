#include <stdio.h>

// Zliczanie spacji, tabulatorów i znaków nowej lini

int main(void){
    int c, spaces, tabs, newLines;

    spaces = 0;
    tabs = 0;
    newLines = 0;

    while((c = getchar()) != EOF){
        if(c == ' ') spaces++;
        if(c == '\t') tabs++;
        if(c == '\n') newLines++;
    }
    printf("Spaces: %d, Tabs: %d, New lines: %d\n",spaces,tabs,newLines);

    return 0;
}