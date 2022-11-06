#include <stdio.h>

int main() {
    int a,b,c;

    printf("Podaj pierwsza liczbe:");
    scanf("%i", &a);
    printf("Podaj druga liczbe:");
    scanf("%i", &b);
    printf("Podaj trzecia liczbe:");
    scanf("%i", &c);

    printf("Podales liczby %i, %i oraz %i\n", a,b,c);

    if((a==b)||(a==c)||(b==c)) {
        printf("Liczby sa rowne\n");
    }
    else if(a>b) {
        if(a>c){
            printf("Liczba a jest najwieksza\n");
        }
        else {
            printf("Liczba c jest najwieksza\n");
        }
    }
    else if(b>a) {
        if(b>c){
            printf("Liczba b jest najwieksza\n");
        }
        else {
            printf("Liczba c jest najwieksza\n");
        } 
    }


    return 0;
}