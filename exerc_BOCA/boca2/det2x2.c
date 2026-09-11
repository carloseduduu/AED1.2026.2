#include <stdio.h>
#define MAX 2

int main() {
    double matriz[MAX][MAX], determinante;
    int i, j;
    for (i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    determinante = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
    printf("%.2lf \n", determinante);
    return 0;
}