#include <stdio.h>

// Prototyp funkcji (nazwy parametrów opcjonalne, warto stosować dla czytelności)
int power(int m, int n);

int main(void){
    int i;
    
    for(i=0; i<10; i++)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));

    return 0;
}

// Definicja funkcji
int power(int m, int n){
    int i, ret;

    ret = 1;
    for(i=0; i<n; i++)
        ret *= m;
    return ret;
}