#include <stdio.h>
#define MAX 10

void imprimeMatriz(int matriz[MAX][MAX], int m, int n){
    int i, j;
    for (i=0;i<n;i++) {
                for (j=0; j<m;j++) {
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }
}

void transporMatriz(int matriz[MAX][MAX], int saida[MAX][MAX], int m, int n){
    int i, j, aux;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            saida[j][i] = matriz[i][j];
        }
    }
}

void inverteMatriz(int matriz[MAX][MAX], int saida[MAX][MAX], int m, int n) {
    int linha, coluna;
    
    for (linha=0;linha<m;linha++){

    }
}

int determinanteMatriz(int matriz[MAX][MAX], int saida[MAX][MAX], int m, int n){
    int determinante;
    if (m == 2 & n == 2) {
        determinante = (matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]);
        return determinante;
    }

    
}

int main() {
    int m, n;
    int i, j;
    char op;
    int matriz[MAX][MAX] = {0};
    int saida[MAX][MAX] = {0};

    scanf("%d %d", &m, &n);
    for (i=0;i<m;i++) {
        for (j=0; j<n;j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    getchar();
    scanf("%c", &op);

    switch(op) {
        case 'I':
            inverteMatriz(matriz, saida, m, n);
            imprimeMatriz(saida, m, n);
        case 'T':
            transporMatriz(matriz, saida, m, n);
            imprimeMatriz(saida, m, n);
            
        case 'D':
            printf("%d", determinanteMatriz(matriz, saida, m, n));

    }

    return 0;
}