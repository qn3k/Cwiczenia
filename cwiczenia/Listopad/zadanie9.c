#include <stdio.h>

int main() {
    int a,b,c,d, bok_a, bok_b, obw, pole;

    printf("Podaj x1:");
    scanf("%i", &a);
    printf("Podaj y1:");
    scanf("%i", &b);
    printf("Podaj x2:");
    scanf("%i", &c);
    printf("Podaj y2:");
    scanf("%i", &d);

    if ((a==c)||(b==d)) {
        printf("Nie istnieje taki prostokat\n");
    }

    else {
        bok_a = c-a;
        bok_b = d-b;

        printf("Bok A: %i, bok b %i\n",bok_a, bok_b); 

        obw = (2*bok_a)+(2*bok_b);
        pole = bok_a*bok_b;

        printf("Obwod wynosi %i, a pole to %i\n",obw, pole);  
    }

    return 0;
}