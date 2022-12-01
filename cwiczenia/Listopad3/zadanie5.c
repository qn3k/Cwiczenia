#include <stdio.h>

int a,b, c,d, e,f; 

int odcinkowa(int a, int b, int c, int d) {

    //check czy odcinki sie zgadzaja

    if((b>a)||(d>c)){
        printf("Zle dane");
    }

    printf ("Odcinek pierwszy to [%i,%i]\n",a,b);
    printf ("Odcinek drugi to [%i,%i]\n",c,d);

    //czy poczatek odcinka pierwszego jest dalej niz poczatek odcinka drugiego
    if (a>c) {
        //czy koniec odcinka drugiego jest dalej niz poczatek odcinka pierwszego
        if (d>a) {
            printf("koniec odc drugiego jest dalej niz poczatek odc pierwszego\n");
        }
        //poczatek odcinka pierwszego jest dalej niz koniec odcinka drugiego
        else {
            return -1;
        }
    }

    //czy poczatek odcinka drugiego jest dalej niz poczatek odcinka pierwszego
    else if(b>c) {
        //czy koniec odcinka pierwszego jest dalej niz koniec odcinka drugiego
        if(b>d){
            // caly odcinek drugi jest przekrojem
            printf("koniec odcinka pierwszego jest dalej niz koniec odcinka drugiego\n");
        }
        //
        else {
            return -1;
        }
    }






    printf ("Poczatek czesci wspolnej to %i\n",e);
    printf ("Koniec czesci wspolnej to %i\n",f);
}

int main() {
    printf("Podaj a1:");
    scanf ("%i", &a);
    printf("Podaj b1:");
    scanf ("%i", &b);
    printf("Podaj a2:");
    scanf ("%i", &c);
    printf("Podaj b2:");
    scanf ("%i", &d);

    //a1 do b1 to pierwszy odcinek czyli od a do b
    //a2 do b2 to drugi odcinek czyli od c do d

    odcinkowa(a,b,c,d);

    //printf ("Poczatek czesci wspolnej to %i\n",odcinkowa(a,b,c,d));
    //printf ("Koniec czesci wspolnej to %i\n",odcinkowa(a,b,c,d));

}