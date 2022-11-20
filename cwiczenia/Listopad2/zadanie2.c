#include <stdio.h>

int main() {
    int i,a,b,wynik;
    wynik=1;
    printf("Podaj a:");
    scanf("%i",&a);
    printf("Podaj b:");
    scanf("%i",&b);

    for(i=1;i<=b;i++) {
        wynik = wynik*a;
    }

    printf("A do potegi b to %i\n",wynik);

}