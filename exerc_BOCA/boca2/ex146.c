#include <stdio.h>
#define MAX 10

int main(){
    int i, j, matriz[MAX][MAX],m, n;

    while (1)
    {
        scanf("%d", &m);
        if (m > 0 && m <= 10){
            while (1){
                scanf("%d", &n);
                if (n > 0 && n <= 10){
                    break;
                }
            }
            break;
        }
    }
    
    for (i=0; i<m; i++) {
        for (j=0; j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<m;i++){
        printf("linha %d:", i+1);
            for(j=0;j<n;j++){
                printf("%d", matriz[i][j]);
                if (j != n-1) {
                    printf(",");
                } else {
                    printf("\n");
                }
            }
    }

    return 0;
}