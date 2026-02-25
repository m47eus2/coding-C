#include <stdio.h>

// Zmienna lokalna / prywatna (automatyczna) deklarowana wewnątrz funkcji -> jest tworzona w momencie wywołania funkcji i usuwana przy zakończeniu funkcji.
// Jest widoczna w granicach jednej funkcji, wartość nie zostaje zachowana pomiędzy różnymi wywołaniami funkcji

// Zmienna zewnętrzna -> widoczna z każdej funkcji, musi zostać zdefiniowana poza funkcjami oraz zadeklarowana w każdej korzystającej z niej funkcji (extern)
// Deklarację extern można pominąć jeśli definicja zmiennej zewnętrznej znajduje się w pliku źródłowym przed miejscem jej użycia w funkcji
// Deklaracja extern jest wymagana jeśli definicja zmiennej zewnętrznej znajduje się w innym pliku 
// Deklaracje extern zmiennych i funkcji często zapisuje się w osobnym pliku nagłówkowym

// Prototyp funkcji nieprzyjmującej argumentów
// copy() -> odczytywane jako deklaracja oparta na starej składni - jedynie wyłączenie sprawdzania listy argumentów
// copy(void) -> deklaracja braku argumentów

// Definicja -> Zmienna zostaje utworzona i zostaje jej przydzielona pamięć
// Deklaracja -> Określenie typu zmiennej bez przydzielenia pamięci

// Wady dużej ilości zmiennych zewnętrznych
// Zmienne pozostają w pamięci nawet gdy nie są potrzebne
// Brak zasad pracy z danymi - zmienne mogą być modyfikowane w nieoczekiwany sposób
// Pozbawienie ogólności funkcji

// Znajdowanie najdłuższego wiersza z wykorzytaniem zmiennych zewnętrznych

#define MAXLINE 1000

// Zdefiniowanie zmiennych zewnętrznych (zaalokowanie pamięci)
int max;
char line[MAXLINE];
char longest[MAXLINE];


int ggetline(void);
void copy(void);

int main(void){
    int len;

    // W tym przypadku opcjonalne deklaracje zmiennych zewnętrznych
    extern int max;
    extern char longest[];

    max = 0;
    while((len = ggetline()) > 0){
        if(len > max){
            max = len;
            copy();
        }
    }
    if(max > 0)
        printf("%s", longest);

    return 0;
}

int ggetline(void){
    int c,i;
    extern char line[];

    for(i = 0; i < MAXLINE-1 && (c = getchar()) != '\n' && c != EOF; i++)
        line[i] = c;
    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(void){
    int i;
    extern char line[], longest[];

    for(i = 0; (longest[i] = line[i]) != '\0'; i++);
}