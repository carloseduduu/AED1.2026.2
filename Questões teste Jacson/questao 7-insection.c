#include <stdio.h>

int main()
{
    int tam = 0;
    int temp;

    scanf("%d", &tam);
    int seq[tam];

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &seq[i]);
    }
    int j;
    for (int i = 1; i < tam; i++)
    {
        temp = seq[i];
        for (j = i; (j > 0) && (temp < seq[j - 1]); j--)
            seq[j] = seq[j - 1];
        seq[j] = temp;
    }

    for (int k = 0; k < tam; k++)
    {
        printf("%d ", seq[k]);
    }
    
}