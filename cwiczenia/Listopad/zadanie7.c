#include <stdio.h>

int main() {
    int a,b,c,sprawdzenie1,sprawdzenie2, p;
    
    printf("Podaj dzien:");
    scanf("%i", &a);
    printf("Podaj miesiac:");
    scanf("%i", &b);
    printf("Podaj rok:");
    scanf("%i", &c);

    //sprawdzenie czy jest przestepny

    sprawdzenie1 = c%4;
    sprawdzenie2 = c%100;

    if(sprawdzenie1==0) {
        if(sprawdzenie2==0) {
            p = 0;
        }
        else {
            p = 1;
        }
    }
    else {
       p = 0;
    }

    /*printf("Przestepny %i\n",p);*/

    //sprawdzenie czy miesiac jest dobrze podany

    if((b>0)&&(b<13)) { 
        /*printf("dzien %i\n",a);
        printf("miesiac %i\n",b);
        printf("rok %i\n",c);*/

    //podzial na dlugosc miesiaca

    if((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12)) {
        //styczen, marzec itp
        if((a>0)&&(a<32)) {
            printf("Data jest poprawna\n");
        }
        else {
            printf("Data nie jest poprawna\n");
        } 
    }
    else if((b==4)||(b==6)||(b==9)||(b==11)) {
        //kwiecien, czerwiec itp
        if((a>0)&&(a<31)) {
            printf("Data jest poprawna\n");
        }
        else {
            printf("Data nie jest poprawna\n");
        } 
    }
    else if(b==2) {
        //luty

        if(p==1){
            if((a>0)&&(a<30)) {
                printf("Data jest poprawna\n");
            }
            else {
                printf("Data nie jest poprawna\n");
            }
        }
        else if(p==0) {
            if((a>0)&&(a<29)) {
                printf("Data jest poprawna\n");
            }
            else {
                printf("Data nie jest poprawna\n");
            }               
        }

    }

    }

    else {
        printf("Data nie jest poprawna\n");    
    }

    return 0;
}