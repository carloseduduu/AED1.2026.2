#include <stdio.h>
#define MAX 10

void somaMatriz(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n) {
    int i, j;
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplicaMatriz(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n) {
    int i, j, k;
    int soma;

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            soma = 0;
            for (k=0;k<n;k++) {
                soma += A[i][k] * B[k][j];
                
            }
           C[i][j] = soma;
        }
    }
}

int main() {
    int i, j;
    int m, n;
    char op;
    scanf("%d %d", &m, &n);
    int matrizA[MAX][MAX] = {0}, matrizB[MAX][MAX] = {0}, saida[MAX][MAX] = {0};

    for (i=0; i<m;i++) {
        for (j=0;j<n;j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    scanf(" %c", &op);

    for (i=0; i<m;i++) {
        for (j=0;j<n;j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    switch(op) {
        case '+':
            somaMatriz(matrizA, matrizB, saida, m, n);
            for (i=0; i<m;i++) {
                for (j=0;j<n;j++)
                {
                    printf("%d ", saida[i][j]);
                    if (j == n-1) {
                    printf("\n");
                    }
                }
            }
            break;
        case 'x':
        
            if (m == n)
            {
                multiplicaMatriz(matrizA, matrizB, saida, m, n);
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        printf("%d ", saida[i][j]);
                        if (j == n - 1)
                        {
                            printf("\n");
                        }
                    }
                }

                break;
            }
            else
                printf("ERROR\n");
            break;
       
        default:
            printf("ERROR\n");
            break;
        }

    printf("\n\n");


    return 0;
}