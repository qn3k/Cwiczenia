#include <stdio.h>

int main() {
    int rok, sprawdzenie1, sprawdzenie2;

    printf("Podaj rok:");
    scanf("%i", &rok);

    printf("Podales rok: %i\n", rok);

    sprawdzenie1 = rok%4;
    sprawdzenie2 = rok%100;

    if(sprawdzenie1==0) {
        if(sprawdzenie2==0) {
            printf("Ten rok nie jest przestepny\n"); 
        }
        else {
            printf("Ten rok jest przestepny\n");
        }

    }
    else {
       printf("Ten rok nie jest przestepny\n"); 
    }

    return 0;
}