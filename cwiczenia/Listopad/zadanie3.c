#include <stdio.h>

int main() {
    int a,b;

    printf("Podaj pierwsza liczbe:");
    scanf("%i", &a);
    printf("Podaj druga liczbe:");
    scanf("%i", &b);

    printf("Podales liczby %i oraz %i\n", a, b);

    if(a>b) {
        printf("Liczba a jest wieksza od liczby b\n");
    }
    else if(b>a) {
       printf("Liczba b jest wieksza od liczby a\n"); 
    }
    else if(a==b) {
        printf("Liczba a i b są rowne\n");
    }

    return 0;
}