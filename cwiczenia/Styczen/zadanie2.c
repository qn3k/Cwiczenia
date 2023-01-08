#include <stdio.h>

int main() {
    FILE *fparzyste = fopen("parzyste.txt","w");
    FILE *fnieparzyste = fopen("nieparzyste.txt","w");

    int i,j,pom,tab[10];

    for (i=0;i<10;i++){
        printf("Podaj liczbe nr %i:",(i+1));
        scanf("%i",&tab[i]); 
    }

    for(j=0;j<10;j++) {
        //printf("%i \n", *(tab+j));
        pom = *(tab+j);
        if((pom%2)==1){
            fprintf(fnieparzyste,"%i ",pom);
        }
        else {
            fprintf(fparzyste,"%i ",pom);
        }

    }

    fclose(fparzyste);
    fclose(fnieparzyste);
}
