#include <stdio.h>

int main() {
    int n,a,b,c,wynik;
    wynik=1;
    n=1000;
    printf("Podaj a:");
    scanf("%i",&a);

    printf("Podaj b:");
    scanf("%i",&b);

    for(c=1;c<=n;c++) {
        wynik = wynik*a;
        if (wynik>b) {
            break;
        }
    }

    printf("Najmniejsza liczba c to %i\n",c);

}