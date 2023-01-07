#include <stdio.h>

int n;

void binarka(int n) {

    if (n>=1) {
        //printf("%i \n",n);
        binarka(n/2);
        printf("%i", (n % 2) );  
    }

}

int main() {
    printf("Podaj liczbe do przeliczenia: ");
    scanf("%i",&n);

    printf("W systemie binarnym to: ");
    binarka(n);
    printf("\n");
}
