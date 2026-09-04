#include <stdio.h>

int main()
{
    unsigned short int P, S, i, j, pedra, pulo; // Pedras e Sapos
    int posicao[100] = {}, distancia[100] = {}, saida[100] = {};
    scanf("%hu %hu", &P, &S);
    
    for (i = 1; i <= S; i++)
    {
        scanf("%d %d", &posicao[i], &distancia[i]);
    }
    
    



    for (i = 1; i <= P; i++)
    {
        printf("I %d POSICAO LIDA %d DIST %d ", i, posicao[i], distancia[i]);
        printf("SAIDA %d\n", saida[i]);
    }
    
    
    return 0;
}