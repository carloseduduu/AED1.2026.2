#include <stdio.h>

void imprimirNumerosNaturais(int n) {
    if (n == 1) {
        printf("%d ", n);
    } else {
        imprimirNumerosNaturais(n - 1);
        printf("%d ", n);
    }
}

int main () {
    int n;
    scanf("%d", &n);
    imprimirNumerosNaturais(n);
    printf("\n\n\n");
    return 0;
}