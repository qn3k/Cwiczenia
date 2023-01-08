#include <stdio.h>

int main() {
    FILE *fbaza = fopen("baza.txt","r");

    char imie[20], nazwisko[30];
    int czyJest = 0;

    printf("Podaj imie: ");
    scanf("%s",imie);
    printf("Podaj nazwisko: ");
    scanf("%s",nazwisko);    

    if(fbaza==NULL) {
        printf("Blad dostepu!");
    } 
    else {
        char bufor[100];
        int licznik_linii =0;

        char imie_f[20],nazwisko_f[30];

        while(!feof(fbaza)){
            fscanf(fbaza,"%s %s",imie_f, nazwisko_f);
            printf("%d: %s ; %s \n",++licznik_linii,imie_f,nazwisko_f);
            //printf("%d: %s \n",++licznik_linii,nazwisko_f);

            if(imie==imie_f){
                printf("Jest taka osoba\n");
                czyJest = 1;
            }


            if((imie==imie_f)&&(nazwisko==nazwisko_f)){
                printf("Jest taka osoba\n");
                czyJest = 1;
            }
        }

        printf("Nie ma takiej osoby\n"); 
        printf("czyjest %i\n",czyJest); 


        fclose(fbaza);
    }
}