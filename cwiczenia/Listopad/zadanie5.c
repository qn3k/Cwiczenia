#include <stdio.h>

int main() {
    char a;
    int b;
    printf("Podaj znak:");
    scanf("%c", &a);

    printf("Podales znak nr %i\n", a);
    printf("Podales znak %c\n", a);

    if((a>64)&&(a<123)) {
        printf("Znak jest litera alfabetu\n");
    }
    else{
       printf("Znak nie jest litera alfabetu\n"); 
    }
    return 0;
}