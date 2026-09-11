#include <stdio.h>

int main() {
    float f, p, celsius, mm;
    scanf("%f\n%f", &f, &p);

    celsius = (5*(f-32))/9;
    mm = p*25.4;

    printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f", celsius, mm);

    return 0;
}