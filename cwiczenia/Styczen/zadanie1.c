#include <stdio.h>
#include <stdlib.h>

int main(){
    int min = 10000, max = 0;
    int pomocnicza;

    FILE *fp;
    fp =fopen("liczby.txt","r");

    if(fp==NULL){
        printf("Blad dostepu!\n");
    }
    else {
        char bufor[100];
        int licznik_linii = 0;

        while (!feof(fp)) {
            fgets(bufor, 100, fp);
            printf("%d: %s ", ++licznik_linii, bufor);
            pomocnicza = atoi(bufor);
            
            if(pomocnicza>max) {
                max = pomocnicza;
            }
            if(pomocnicza<min) {
                min = pomocnicza;
            }
            
        }


        fclose(fp);

        printf("\n");
        printf("Minimalna: %i\n",min);
        printf("Maksymalna: %i\n",max);
    }
}