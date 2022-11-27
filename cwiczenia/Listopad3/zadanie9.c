#include <stdio.h>

int c, wynik;

int sprawdzajaca_rok(int c) {

    int sprawdzenie1,sprawdzenie2;

    sprawdzenie1 = c%4;
    sprawdzenie2 = c%100;

    if(sprawdzenie1==0) {
        if(sprawdzenie2==0) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else {
       return 0;
    }
}

int main () {

    printf("Podaj rok:");
    scanf("%i", &c);

    wynik = sprawdzajaca_rok(c);

    if(wynik==1) {
        printf("Rok jest przestepny\n");
    }
    else {
        printf("Rok nie jest przestepny\n"); 
    }
}