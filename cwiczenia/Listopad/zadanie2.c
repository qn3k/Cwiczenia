#include <stdio.h>

int main() {
    int a,b, dodawanie, odejmowanie, mnozenie, dzielenie, reszta;

    printf("Podaj pierwsza liczbe:");
    scanf("%i", &a);
    printf("Podaj druga liczbe:");
    scanf("%i", &b);

    printf("Podales liczby %i oraz %i\n", a, b);

    dodawanie = a+b;
    odejmowanie = a-b;
    mnozenie = a*b;
    dzielenie = a/b;
    reszta = a%b;

    printf("Wynik ich dodawania to: %i\n", dodawanie);
    printf("Wynik ich odejmowania to: %i\n", odejmowanie);
    printf("Wynik ich mnozenia to: %i\n", mnozenie);
    printf("Wynik ich dzielenia to: %i\n", dzielenie);
    printf("Reszta z ich dzielenia to: %i\n", reszta);

    return 0;
}