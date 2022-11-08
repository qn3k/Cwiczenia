#include <stdio.h>

int main () {

    int a,b,c,i;

    b = 3;
    
    printf("Mysle o pewnej liczbie z zakresu 1-5\n");
    printf("Masz 3 szanse na odgadniecie tej liczby\n");

    for (i=1;i<=3;i++) {
        printf("Jaka to liczba? ");
        scanf("%i",&a);

        //c=a;

        if ( (a<1) || (a>5) ) {
            printf("To liczba z poza zakresu od 1 do 5!\n");
        }

        else {
            if (a==b){
                printf("Udalo sie! Odgadles!\n");
                break;
            }
            else {
                printf("Sprobuj jeszcze raz\n");
            }
        }
    }
    return 0;
}