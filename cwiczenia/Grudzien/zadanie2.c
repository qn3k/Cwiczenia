#include <stdio.h>

int a,b, pomocnicza1, pomocnicza2, wynik;

int euklides(int a, int b) {

    pomocnicza1 = a;
    pomocnicza2 = b;

    if (pomocnicza1==pomocnicza2) {
        if (pomocnicza1==0) {
            return pomocnicza2;
        }
        else {
            return pomocnicza1;
        }

    }

    else if (pomocnicza1>pomocnicza2) {
        //printf("pierwszy");
        pomocnicza1 = pomocnicza1-pomocnicza2;
        euklides (pomocnicza1,pomocnicza2);
    }
    else {
        //printf("drugi");
        pomocnicza2 = pomocnicza2-pomocnicza1;
        euklides (pomocnicza1,pomocnicza2);
    }

}


int main() {

    printf("Podaj pierwsza liczbe:");
    scanf("%i",&a);
    printf("Podaj druga liczbe:");
    scanf("%i",&b);

    printf("Twoj najwiekszy dzielnik to: %i", euklides(a,b) );

    return 0;
}
