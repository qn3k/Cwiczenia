#include <stdio.h>

int main() {
    int i,n,wynik;
    n=9;

    int tab[9] = {1,2,12,4,5,11,7,13,19};

    for(i=0;i<n;i++) {
        wynik = tab[i]*tab[i];
        printf("Kwadrat liczby %i to %i\n",(i+1),wynik);
    }
}