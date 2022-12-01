#include <stdio.h>

int wynik;
char a,b;

int funkcja (char a, char b) {  

    if (a==b) {
       return 1; 
    }
    else return 0;
}

int main() {

    printf("Podaj litere a:");
    scanf(" %c",&a);

    printf("Podaj litere b:");
    scanf(" %c",&b);

    printf("%i\n",funkcja(a,b));

}