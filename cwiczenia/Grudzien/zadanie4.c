#include <stdio.h>

int f1 = 0 , f2 = 1, n, i,fibo;

int fibonacci(int n) {
    if (n==0) {
        return n;
    }
    else if (n==1) {
        return n;
    }

    else {
        fibo = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    printf("Podaj n:");
    scanf("%i",&n);

    printf("Twoj n-ty wyraz ciagu Fibonacciego to: %i \n", fibonacci(n));
}
