#include <stdio.h>

int a,b,c, wynik;

int sprawdzajaca_rok(int c) {

    int sprawdzenie1,sprawdzenie2;

    sprawdzenie1 = c%4;
    sprawdzenie2 = c%100;

    if(sprawdzenie1==0) {
        if(sprawdzenie2==0) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else {
       return 0;
    }
}

int sprawdzajaca_ilosc_dni(int b, int c) {

    int p;
    p = sprawdzajaca_rok(c);

    if((b>0)&&(b<13)) { 

    //podzial na dlugosc miesiaca

    if((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12)) {
        //styczen, marzec itp
        return 31;
    }
    else if((b==4)||(b==6)||(b==9)||(b==11)) {
        //kwiecien, czerwiec itp
        return 30; 
    }
    else if(b==2) {
        //luty
        if(p==1){
            return 29;
        }
        else if(p==0) {
            return 28;  
        }
    }
    }
    else {
        printf("Zly numer miesiaca\n");  
        return 0;  
    }
}

int sprawdzajaca_do_konca_roku(int a, int b, int c) {

    int suma_dni =0;

    int p;
    p = sprawdzajaca_rok(c);

    int ilo_dni_tenmiesiac = sprawdzajaca_ilosc_dni(b, c);

    suma_dni = ilo_dni_tenmiesiac - a;

    int i; //obecny miesiac ktory dodajemy

    b++;

    int ilo_dni_dodmiesiac;

    printf("Doszedlem do 73 linii...\n");

    for (i=b;i<13;i++) {
        ilo_dni_dodmiesiac = sprawdzajaca_ilosc_dni(b, c);
        suma_dni = suma_dni + ilo_dni_dodmiesiac;
    }

    printf("Doszedlem do 80 linii...\n");

    return suma_dni;

}

int main () {
    
    printf("Podaj dzien:");
    scanf("%i", &a);
    printf("Podaj miesiac:");
    scanf("%i", &b);
    printf("Podaj rok:");
    scanf("%i", &c);

    wynik = sprawdzajaca_do_konca_roku(a,b,c);

    printf("Liczba dni do konca roku to %i\n",wynik);
}