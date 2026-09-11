#include <stdio.h>
#include <string.h>

char *Epalindromo(int x)
{
    int und, dez, cent, udm;

    // Decompor dígitos
    udm = (x / 1000) % 10;
    cent = (x / 100) % 10;
    dez = ((x / 10) % 10);
    und = (x % 10);


    int valor_invertido = (und * 1000 + dez * 100 + cent * 10 + udm * 1);
    if (x == valor_invertido) {
        return "yes";
    } else {
        return "no";
    }

}

int main(void) {

    int n, i,j, valor;

    scanf("%d", &n);
    char saida[n][4];

    for (i = 0; i < n; i++) {
        scanf("%d", &valor);
        strcpy(saida[i], Epalindromo(valor));
    }

    for (i = 0; i < n; i++) {
        for ( j = 0; saida[i][j] != '\0'; j++){
            printf("%c", saida[i][j]);
        }
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}