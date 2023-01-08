#include <stdio.h>

int a = 10;
int b = 13;
int c;
int *ptr1, *ptr2, ptr3;

void zamiana(){

    ptr3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = ptr3;

    //c=a;
    //a=b;
    //b=c;

}

int main() {

    printf("Zmienne to: %i i %i \n",a,b);

    ptr1 = &a;
    ptr2 = &b;

    zamiana(*ptr1,*ptr2);

    printf("Pierwszy adres:   %p \n",ptr1);
    printf("Drugi adres:      %p \n",ptr2);

    printf("Zmienne to: %i i %i \n",a,b);

}