#include <stdio.h>

int a,b,c, d,e,f, wynik;

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

    //printf("Doszedlem do 73 linii...\n");

    for (i=b;i<13;i++) {
        ilo_dni_dodmiesiac = sprawdzajaca_ilosc_dni(b, c);
        suma_dni = suma_dni + ilo_dni_dodmiesiac;
    }

    //printf("Doszedlem do 80 linii...\n");

    return suma_dni;

}

int suma_dni_w_roku(int c, int f) {
    int p, m, nastepny_rok, suma_dni_w_f;
    int i =0;
    int suma_dni_lat_do_f = 0;

    p=sprawdzajaca_rok(c);

    for (i=c+1;i<=f;i++) {

        m =sprawdzajaca_rok(i);

        if (m==1) {
            suma_dni_lat_do_f = suma_dni_lat_do_f + 366;     
        } 

        else {
            suma_dni_lat_do_f = suma_dni_lat_do_f + 365; 
        }

        //printf("rok %i, dni razem %i\n",i, suma_dni_lat_do_f);
    } 

    return suma_dni_lat_do_f;
}

int suma_dni_pomiedzy_datami() {

    int j = sprawdzajaca_do_konca_roku(a,b,c);
    
    int k = sprawdzajaca_do_konca_roku(d,e,f);

    int l = suma_dni_w_roku(c,f);

    //printf("dni w roku %i: %i\n",c, j);
    //printf("dni w roku %i: %i\n",f, k);

    //printf("dni w latach pomiedzy: %i\n", l);

    int suma = j+l-k;

    //printf("suma tego wyzej to: %i\n", suma);
    
    return suma;
}

int main () {

    printf("Podaj pierwsza date:\n");
    
    printf("Podaj dzien:");
    scanf("%i", &a);
    printf("Podaj miesiac:");
    scanf("%i", &b);
    printf("Podaj rok:");
    scanf("%i", &c);

    printf("Podaj druga date:\n");

    printf("Podaj dzien:");
    scanf("%i", &d);
    printf("Podaj miesiac:");
    scanf("%i", &e);
    printf("Podaj rok:");
    scanf("%i", &f);

    //wynik = suma_dni_w_roku(c,f);

    wynik = suma_dni_pomiedzy_datami();

    printf("Liczba dni do konca roku to %i\n",wynik);
}