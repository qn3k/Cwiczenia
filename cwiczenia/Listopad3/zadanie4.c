#include <stdio.h>

int kon,pocz, i, czypali;

char wynik;
char s[10];

int palindrom (char s[]) {
    for(kon=0;kon<100;kon++){
        wynik = s[kon];
        if (wynik==0) {
            break;
        }
    }  

    kon--;

    printf("Znak %i jest ostatni\n",kon);
    printf("Znak %i jest pierwszy\n",pocz);

    for (i=1;i<kon;i++) {
        if( (s[pocz]) == (s[kon]) ) {
            czypali = 1;
            pocz++;
            kon--;
        }   
        else {
            czypali = 0;break;
        }
    }

    return czypali;
}

int main() {

    printf("Podaj slowo:");
    scanf("%s",s);

    printf("Czy slowo to palindrom? %i\n",palindrom(s));

}