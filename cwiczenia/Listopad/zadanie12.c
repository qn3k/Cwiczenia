#include <stdio.h>

int main() {
    int a, i, sprawdzenie, p;

    printf("Podaj liczbe:");
    scanf("%i", &a);

    p = 0;

    for(i=2;i<7;i++){
        
        if(p==1){
            break;
        }

        sprawdzenie = a%i;
        if(sprawdzenie==0) {
            printf("Liczba %i jest podzielna przez %i\n",a,i);
            p = 1;
        } 
    }

    if(p==0){
       printf("Liczba %i nie jest podzielna przez liczby od 2 do 6\n",a); 
    }

    return 0;
}