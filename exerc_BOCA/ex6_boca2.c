#include <stdio.h>
#define MAX 2

int main() {
    int i, j;
    float matriz[MAX][MAX], det;
    for (i=0;i<MAX;i++){
        for (j=0;j<MAX;j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    det = (matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0]);
    printf("O VALOR DO DETERMINANTE E = %.2f", det);
    return 0;
}