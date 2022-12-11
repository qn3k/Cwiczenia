#include <stdio.h>

int n, wynik =1 ;
int i=1;

int silnia(int n) {

    if (i>n) {
        return wynik;
    }

    else {
        wynik = i*wynik;
        i++;
        silnia(n);
    }

}

int main()
{
    printf("Podaj n:");
    scanf("%i",&n);



    printf("Twoj wynik to: %i\n",silnia(n));
    return 0;
}
