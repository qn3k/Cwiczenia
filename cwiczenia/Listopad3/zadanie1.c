#include <stdio.h>

int a,b,wybor,n,wynik;
int czydziala = 1;

int dodawanie (int a, int b) {
    return a+b;
}

int odejmowanie (int a, int b) {
    return a-b;
}
int mnozenie (int a, int b) {
    return a*b;
}

int dzielenie (int a, int b) {
    return a/b;
}

int main(void) {

    while (czydziala==1) {

    printf("Podaj a:");
    scanf("%i",&a);

    printf("Podaj b:");
    scanf("%i",&b);

    printf("Wybierz dzialanie (1-4):");
    scanf("%i",&wybor);

    switch(wybor) {
        case 1:
            printf("Wynik dodawania to: %i\n", dodawanie(a, b));
        break;
        case 2:
            printf("Wynik odejmowania to: %i\n", odejmowanie(a, b));
        break;
        case 3:
            printf("Wynik mnozenia to: %i\n", mnozenie(a, b));
        break;
        case 4:
            printf("Wynik dzielenia to: %i\n", dzielenie(a, b));
        break;
        default:
            printf("Nie ma takiego dzialania\n");
    }
    }
}
