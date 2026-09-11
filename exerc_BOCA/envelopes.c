#include <stdio.h>

int main(){
    unsigned short int num, tipos;
    int balas[1000] = {}, qnt[1000] = {};
    int i, j, k;

    scanf("%hu %hu", &num, &tipos);

    for (i = 0; i < num; i++){
        scanf("%d", &balas[i]);
    }

    for (j = 0; j < num; j++)
    {
        qnt[balas[j]]++;
        
    }

    int menorvalor = qnt[1];

    for (k=1;k<=tipos;k++)
    {
        if (qnt[k]<menorvalor) {
            menorvalor = qnt[k];
        }
    }

    printf("%d\n", menorvalor);

    return 0;
}