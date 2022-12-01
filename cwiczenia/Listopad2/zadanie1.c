#include <stdio.h>

int main() {
    int i,n,wynik;
    printf("Podaj n:");
    scanf("%i",&n);

    for(i=1;i<=n;i++) {
        wynik = i*i;
        printf("Kwadrat liczby %i to %i\n",i,wynik);
    }

}