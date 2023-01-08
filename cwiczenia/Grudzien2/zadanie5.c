#include <stdio.h>

int a,b,c, tymczasowa;

void sortowanie(int *a,int *b,int *c) {

    if(*a>*b){
        tymczasowa = *a;
        *a = *b;
        *b = tymczasowa;
    }

    if(*b>*c){
        tymczasowa = *b;
        *b = *c;
        *c = tymczasowa;
    }
    
    if(*a>*b){
        tymczasowa = *a;
        *a = *b;
        *b = tymczasowa;
    }
}

int main() {

    printf("Podaj liczbe a: ");
    scanf("%i",&a);
    printf("Podaj liczbe b: ");
    scanf("%i",&b);
    printf("Podaj liczbe c: ");
    scanf("%i",&c);

    sortowanie(&a,&b,&c);

    printf("Posortowane liczby: %i,%i,%i \n",a,b,c);

}