#include <stdio.h>

// Argumenty przekazywane jako wartość (call by value)
// Argumenty są przekazywane jako tymczasowe zmienne (lokalne kopie oryginalnego argumentu)
// Funkcja nie może bezpośrednio modyfikować wartości zmiennej w funkcji wywołującej

// Argumenty przekazywane jako odwołanie (call by reference)
// Funkcja ma dostęp do oryginalnych zmiennych

int power(int m, int n);

int main(void){
    int i;
    for(i=0; i<10; i++)
        printf("%d %d\n",i, power(2,i));
    return 0;
}


// Definicja funkcji power przy wykorzystaniu przekazywania argumentów jako wartość (brak potrzeby wprowadzania zmiennej licznika)
int power(int m, int n){
    int ret;
    for(ret = 1; n > 0; n--)
        ret *= m;
    return ret;
}