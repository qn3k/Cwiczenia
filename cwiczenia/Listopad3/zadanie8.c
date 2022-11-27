#include <stdio.h>

int a,b,c,sprawdzenie1,sprawdzenie2, p, wynik;

int sprawdzajaca_poprawnosc_daty(int a, int b, int c) {

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

    //sprawdzenie czy miesiac jest dobrze podany

    if((b>0)&&(b<13)) { 

    //podzial na dlugosc miesiaca

    if((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12)) {
        //styczen, marzec itp
        if((a>0)&&(a<32)) {
            //printf("Data jest poprawna\n");
            return 1;
        }
        else {
            //printf("Data nie jest poprawna\n");
            return 0;
        } 
    }
    else if((b==4)||(b==6)||(b==9)||(b==11)) {
        //kwiecien, czerwiec itp
        if((a>0)&&(a<31)) {
            //printf("Data jest poprawna\n");
            return 1;
        }
        else {
            //printf("Data nie jest poprawna\n");
            return 0;
        } 
    }
    else if(b==2) {
        //luty

        if(p==1){
            if((a>0)&&(a<30)) {
                //printf("Data jest poprawna\n");
                return 1;
            }
            else {
                //printf("Data nie jest poprawna\n");
                return 0;
            }
        }
        else if(p==0) {
            if((a>0)&&(a<29)) {
                //printf("Data jest poprawna\n");
                return 1;
            }
            else {
                //printf("Data nie jest poprawna\n");
                return 0;
            }               
        }

    }

    }

    else {
        //printf("Data nie jest poprawna\n");  
        return 0;  
    }

    
}

int main () {
    
    printf("Podaj dzien:");
    scanf("%i", &a);
    printf("Podaj miesiac:");
    scanf("%i", &b);
    printf("Podaj rok:");
    scanf("%i", &c);

    wynik = sprawdzajaca_poprawnosc_daty(a,b,c);

    if(wynik==1) {
        printf("Data jest poprawna\n");
    }
    else {
        printf("Data nie jest poprawna\n"); 
    }
}

