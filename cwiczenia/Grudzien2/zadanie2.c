#include <stdio.h>

int i,j,tab[10];

int main() {
    for(i=0;i<10;i++) {
        printf("Podaj element nr %i: ",(i+1));
        scanf("%i",&tab[i]);
    }

    //ptr = tab[];

    for(j=0;j<10;j++) {
        printf("%i \n", *(tab+j));
    }
    
}