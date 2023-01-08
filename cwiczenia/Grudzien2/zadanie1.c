#include <stdio.h>

int globalna = 11;
int *ptr1, *ptr2;

int liczba(int a, int b) {

    ptr1 = &a;
    ptr2 = &b;

    printf("Adres zmiennej globalna: %p \n",ptr1);
    printf("Adres zmiennej lokalna: %p \n",ptr2);

}

int main(){
    int lokalna;
    lokalna = globalna;

    ptr1 = &globalna;
    ptr2 = &lokalna;

    printf("Adres zmiennej globalna: %p \n",ptr1);
    printf("Adres zmiennej lokalna: %p \n",ptr2);

    

    liczba(lokalna, globalna);


}