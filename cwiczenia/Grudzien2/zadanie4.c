#include <stdio.h>

int i,j;
int rozmiar = 5;

int tab[] = {2,5,6,8,4};

int najwiekszy(int * tab, int rozmiar) {

    int max = tab[0];
    int indeks = 0;

    for(i=0;i<rozmiar;i++){
        if(tab[i]>max){
            max = tab[i];
            indeks = i;
        }
    }

    printf("Najwieksza wartosc w tablicy to: %i \n",max);

    tab[indeks] = 0;

    return max;
}

int main() {
    
    printf("Tablica przed: \n");

    for(j=0;j<rozmiar;j++) {
        printf("%i\n", *(tab+j));
    }

    int najwiekszy_element = najwiekszy(tab,rozmiar);

    printf("Tablica po: \n");

    for(j=0;j<rozmiar;j++) {
        printf("%i\n", *(tab+j));
    }

}