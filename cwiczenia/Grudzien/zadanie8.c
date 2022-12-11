#include <stdio.h>

int i, czypali, znak;

int kon = 0;
int pocz =0;

char wynik;
int dlugosc =0;
char s[10];

int dlugosc_slowa(char s[]){

    znak = s[kon];

    if (znak == 0 ) {
        dlugosc = dlugosc-1;
        return dlugosc;
    }

    if (znak != 0) {
        //printf("znak to: %i",znak);
        kon++;
        dlugosc++;
        dlugosc_slowa(s);
    }


}

int palindrom (char s[]) {



    if (s[pocz]!=s[dlugosc]) {
        return 0;
    }

    if (pocz>dlugosc) {
        return 1;
    }

    else {
        pocz++;
        dlugosc--;
        palindrom(s);
    }

}

int main() {

    printf("Podaj slowo:");
    scanf("%s",s);

    //printf("Dlugosc slowa to %i\n",dlugosc_slowa(s));

    printf("Czy slowo to palindrom? %i\n",palindrom(s));


}
