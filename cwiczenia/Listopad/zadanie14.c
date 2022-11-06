#include <stdio.h>

int main() {
    int a;
    double pi, wynik, rad;
    printf("Podaj kat:");
    scanf("%i", &a);

    pi = 3.1415;
    rad = pi/180;

        wynik = a*rad;
        printf("Wynik to %f radianow\n", wynik);
}