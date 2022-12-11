#include <stdio.h>

int dlug = 9;
int liczba[9] ={2,5,11,19,25,36,37,48,59};
int n, srodek= 0;
int lewa = 0, prawa = 9;

int przeszukiwanie(int n) {

    srodek = (lewa+prawa)/2;

    //printf("srodek to: %i\n",srodek);
    //printf("lewa to: %i\n",lewa);
    //printf("prawa to: %i\n",prawa);
    //printf("liczba srodkowa %i\n", liczba[srodek]);

    if (liczba[srodek]==n) {
        return 1;
    }

    if (lewa>prawa) {
        return 0;
    }

    if (n<liczba[srodek]) {
        prawa = srodek - 1;
        przeszukiwanie(n);
    }
    else {
        lewa = srodek +1;
        przeszukiwanie(n);
    }


}

int main() {
    printf("Podaj liczbe n: ");
    scanf("%i",&n);
    printf("Czy jest? %i",przeszukiwanie(n));

}
