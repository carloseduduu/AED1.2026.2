#include <stdio.h>

int main(){
    int i, j, matriz[6][6], soma, maior = 0 ;
    for (i=0; i<6;i++){
        for (j=0;j<6;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0] + matriz[0][1] + matriz[0][2] +
                               matriz[1][1] +
                matriz[2][0] + matriz[2][1] + matriz[2][2];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            soma = matriz[i][j] + matriz[i][j + 1] + matriz[i][j + 2] +
                                matriz[i + 1][i + 1] +
                   matriz[i + 2][j] + matriz[i + 2][j + 1] + matriz[i + 2][j + 2];

            if (soma > maior)
            {
                maior = soma;
            };
        }
    }
    printf("%d\n", maior);
        
    return 0;
}