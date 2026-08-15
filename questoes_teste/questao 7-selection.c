#include <stdio.h>

int main(void)
{
    int i, j, n, menor, troca;
    i = j = n = 0;
    scanf("%d", &n);
    int V[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for ( j = i+1; j < n; j++) {
            if(V[j] < V[menor]) {
                menor = j;
            }
        }
        if (i != menor) 
        {
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }

for (int k = 0; k < n; k++)
    {
        printf("%d ", V[k]);
    }

    return 0;
}