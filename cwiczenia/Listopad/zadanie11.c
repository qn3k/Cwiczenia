#include <stdio.h>

int main() {
    int a,b,c,lewa, prawa;

    printf("Podaj pierwszy odcinek:");
    scanf("%i", &a);
    printf("Podaj drugi odcinek:");
    scanf("%i", &b);
    printf("Podaj trzeci odcinek:");
    scanf("%i", &c);

    if ( ((a+c)>b) && ((a+b)>c) && ((b+c)>a) ) {
        printf("Z tych odcinkow mozna ulozyc trojkat\n");

    if(a>b) {
        if(a>c){
            //Liczba a jest najwieksza

            lewa = (b*b)+(c*c);
            prawa = (a*a);

            if(lewa==prawa) {
                printf("Trojkat jest prostokatny\n");
            }  
            else {
                printf("Trojkat nie jest prostokatny\n");
            }
            
        }
        else {
            //Liczba c jest najwieksza

            lewa = (b*b)+(a*a);
            prawa = (c*c);

            if(lewa==prawa) {
                printf("Trojkat jest prostokatny\n");
            }  
            else {
                printf("Trojkat nie jest prostokatny\n");
            }
        }
    }
    else if(b>a) {
        if(b>c){
            //Liczba b jest najwieksza

            lewa = (c*c)+(a*a);
            prawa = (b*b);

            if(lewa==prawa) {
                printf("Trojkat jest prostokatny\n");
            }  
            else {
                printf("Trojkat nie jest prostokatny\n");
            }
        }
        else {
            //Liczba c jest najwieksza
                        
            lewa = (b*b)+(a*a);
            prawa = (c*c);

            if(lewa==prawa) {
                printf("Trojkat jest prostokatny\n");
            }  
            else {
                printf("Trojkat nie jest prostokatny\n");
            }
        } 
    }
    }

    else {
        printf("Z tych odcinkow nie mozna ulozyc trojkata\n");
    }
    return 0;
}