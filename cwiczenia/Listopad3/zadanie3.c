#include <stdio.h>

int i;
char wynik;
char s[10];

char napisowa (char s[], int i) {  
    wynik = s[i];
    return wynik;
}

int main() {

    printf("Podaj napis:");
    scanf("%s",s);

    printf("Podaj liczbe:");
    scanf("%i",&i);

    printf("%c\n",napisowa(s,i));

}