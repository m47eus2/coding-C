#include <stdio.h>

#define UP 0
#define DOWN 1
#define RIGHT 2
#define LEFT 3


void setCursor(unsigned int row, unsigned int col);
void setCursorCollumn(unsigned int col);
void moveCursor(unsigned int dir, unsigned int n);
void setCursorHome(void);

void clearScreen(void);

int main(void){
    setCursor(5,5);
    printf("Hello World!");
    moveCursor(UP, 1);
    printf("Hello there!");
    return 0;
}

void setCursor(unsigned int row, unsigned int col){
    printf("\033[%d;%dH",row, col);
}

void setCursorCollumn(unsigned int col){
    printf("\033[%dG",col);
}

void moveCursor(unsigned int dir, unsigned int n){
    if(dir == UP)
        printf("\033[%dA",n);
    else if(dir == DOWN)
        printf("\033[%dB",n);
    else if(dir == RIGHT)
        printf("\033[%dC",n);
    else if(dir == LEFT)
        printf("\033[%dD",n);
}

void setCursorHome(void){
    printf("\033[H");
}

void clearScreen(void){
    printf("\033[2J");
}