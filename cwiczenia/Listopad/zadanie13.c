#include <stdio.h>

int main() {
    int a;
    double pi, wynik, rad;
    printf("Podaj liczbe radianow:");
    scanf("%i", &a);

    pi = 3.14;
    rad = 180/pi;

    switch (a) {
        case 1:
        wynik = pi*rad*0;
        printf("Wynik to %f stopni\n", wynik);
        break;
        case 2: 
        wynik = pi*rad/6;
        printf("Wynik to %f stopni\n", wynik);
        break;
        case 3: 
        wynik = pi*rad/4;
        printf("Wynik to %f stopni\n", wynik);
        break;
        case 4: 
        wynik = pi*rad/3;
        printf("Wynik to %f stopni\n", wynik);
        break;
        case 5: 
        wynik = pi*rad/2;
        printf("Wynik to %f stopni\n", wynik);
        break;
        default:
            printf("Brak mozliwosci przeliczenia\n");

    }

    return 0;
}