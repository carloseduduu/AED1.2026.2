#include <stdio.h>
#define MAX 1000
int i, j, n, matriz[MAX][MAX];

int main()
{
    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    j = n - 1;
    for (i = 0; i < n; i++)
    {
        printf("%d", matriz[i][j]);
        printf("\n");
        j--;
    }
    return 0;
}