#include <stdio.h>

/*Tabela przeliczeniowa stopni Fahrenheita na Celsjusza*/

int main(void){
    // Deklaracja zmiennych
    int fahr, cels;
    int lower, upper, step;

    // Operacje na liczbach stałoprzecinkowych

    // Instrukcje przypisania
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahr\tCels\n");
    printf("------------\n");
    while(fahr <= upper){
        cels = 5 * (fahr-32) / 9; // Obcięcie części ułamkowej wyniku
        printf("%3d%6d\n",fahr,cels);
        fahr = fahr + 20;
    }

    // Arytmetyka zmiennoprzecinkowa
    float ffahr, fcels;

    lower = 0;
    upper = 300;
    step = 20;
    ffahr = lower;

    while(ffahr <= upper){
        fcels = (5.0/9.0) * (ffahr-32.0);
        printf("%3.0f %6.1f\n",ffahr,fcels);
        ffahr = ffahr + step; // Gdy operator ma chociaż jeden operand zmiennoprzecinkowy liczba int zostaje przekształcona na float
    }

    return 0;
}

// Modyfikatory w printf
/*
    %d      -> liczba całkowita
    %6d     -> liczba całowita na conajmniej 6 miejscach (wyrównanie do prawej)
    %f      -> liczba zmiennoprzecinkowa
    %6f     -> liczba zmiennoprzecinkowa na conajmniej 6 miejscach (wyrównanie do prawej)
    %.2f    -> liczba zmiennoprzecinkowa 2 znaki po przecinku
    %6.2f   -> liczba zmiennoprzecinkowa na conajmniej 6 miejscach, 2 znaki po przecinku 

    %o      -> liczba w notacji ósemkowej
    %x      -> liczba w notacji szesnastkowej
    %c      -> znak
    %s      -> ciąg znaków 
    %%      -> %
*/