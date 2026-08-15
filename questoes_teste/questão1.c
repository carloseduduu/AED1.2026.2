#include <stdio.h>

int main () {
    int soldados = 0, droides = 0;
    
    printf("Preencha respectivamente a quantidade de soldados e droides\n");
    
    scanf("%d" "%d", &soldados, &droides);
    
    (soldados + droides <= 1000) ? printf("S\n") : printf("N\n"); //Estrutura elsif. Se a condição for true então execute B, se não Execute C
    
}