#include <stdio.h>

int main() {
    int a,b,c;

    printf("Podaj pierwszy odcinek:");
    scanf("%i", &a);
    printf("Podaj drugi odcinek:");
    scanf("%i", &b);
    printf("Podaj trzeci odcinek:");
    scanf("%i", &c);

    if ( ((a+c)>b) && ((a+b)>c) && ((b+c)>a) ) {
        printf("Z tych odcinkow mozna ulozyc trojkat\n");
    }
    else {
        printf("Z tych odcinkow nie mozna ulozyc trojkata\n");
    }
    return 0;
}