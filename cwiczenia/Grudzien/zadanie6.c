#include <stdio.h>

int n, i, wynik = 0;

int suma(int n) {

    if (n==0) {
        return wynik;
    }

    else {
        wynik = (n%10) + wynik;
        n= n/10;
        suma(n);
    }

}

int main () {
    printf("Podaj n: ");
    scanf("%i",&n);

    printf("Suma cyfr podanej liczby to: %i \n", suma(n));

}
