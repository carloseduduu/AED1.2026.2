#include <stdio.h>
#define MAX 2

int main(){
    double matriz[MAX][MAX];
    int i, j;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Salva os valores originais para não sobrescrevê-los durante o cálculo
    float a = matriz[0][0];
    float b = matriz[0][1];
    float c = matriz[1][0];
    float d = matriz[1][1];

    // Aplica a regra correta de multiplicação de matrizes (Linha x Coluna)
    matriz[0][0] = a * a + b * c;
    matriz[0][1] = a * b + b * d;
    matriz[1][0] = c * a + d * c;
    matriz[1][1] = c * b + d * d;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.3lf ", matriz[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}