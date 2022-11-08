#include <stdio.h>

int main () {

    int a,b_1,b_2,b_3,b_4,b_5,i;

    b_1=0;
    b_2=0;
    b_3=0;
    b_4=0;
    b_5=0;
    
    printf("Mysle o pewnej liczbie z zakresu 1-5\n");
    printf("Masz 4 szanse na odgadniecie tej liczby\n");

    for (i=1;i<=4;i++) {
        printf("Jaka to liczba? ");
        scanf("%i",&a);

        if ( (a<1) || (a>5) ) {
            printf("To liczba z poza zakresu od 1 do 5!\n");
            i--;
        }

            if (a==1){
                printf("Sprobuj jeszcze raz\n");
                b_1=1;
            }
            else if (a==2){
                printf("Sprobuj jeszcze raz\n");
                b_2=1;
            }
            else if (a==3){
                printf("Sprobuj jeszcze raz\n");
                b_3=1;
            }
            else if (a==4){
                printf("Sprobuj jeszcze raz\n");
                b_4=1;
            }
            else if (a==5){
                printf("Sprobuj jeszcze raz\n");
                b_5=1;
            }
    }

    if (b_1==0) {
        printf("Liczba o ktorej myslalem to 1\n");
    }
    else if (b_2==0) {
        printf("Liczba o ktorej myslalem to 2\n");
    }
    else if (b_3==0) {
        printf("Liczba o ktorej myslalem to 3\n");
    }
    else if (b_4==0) {
        printf("Liczba o ktorej myslalem to 4\n");
    }
    else if (b_5==0) {
        printf("Liczba o ktorej myslalem to 5\n");
    }
    return 0;
}