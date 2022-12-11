#include <stdio.h>

int n;
int i=1;

int wypisanie(int n) {
    if (i==n) {
        printf("%i]\n",i);
        return;
    }

    else {
        printf("%i,",i);
        i++;
        wypisanie(n);
    }
}

int main (){
    printf("Podaj n:");
    scanf("%i",&n);

    printf("Liczby to: [");
    printf( wypisanie(n) );

}
