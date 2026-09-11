#include <stdio.h>

int main() {
    int h, m, s;
    float tempo;
    scanf("%d\n%d\n%d", &h, &m, &s);

    tempo = (h*60*60)+(m*60)+s;

    printf("O TEMPO EM SEGUNDOS E = %.f", tempo);
    return 0;
}