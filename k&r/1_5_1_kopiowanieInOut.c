#include <stdio.h>

// getchar() -> odczytanie znaku strumienia wejściowego
// putchar() -> podanie znaku na strumień wyjściowy

int main(void){

    // Wersja 1
    // int c;
    // c = getchar();
    // while(c != EOF){
    //     putchar(c);
    //     c = getchar();
    // }

    // Wersja 2 - przypisanie jako element warunku
    // Wyrażenie c = getchar() ma wartość lewej strony wyrażenia po wykonaniu przypisania
    int c;
    while((c = getchar()) != EOF){
        putchar(c);
    }

    return 0;
}