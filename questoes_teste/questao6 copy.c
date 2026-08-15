#include <stdio.h>

int main()
{
    int continua = 0;
    int n = 0, temp = 0;
    scanf("%d", &n);
    int seq[n], fim = n;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
    }

    do
    {
        continua = 0;                   // Esse valor sempre é zerado a cada iteração do bloco
        for (int j = 0; j < fim - 1; j++) // O loop vai rodar enquanto a posição lida (j) for menor que final - 1;
        {
            if (seq[j] > seq[j + 1]) // Se o valor à direita for maior que o valor lido na posição (j) os valores são trocados
            {
                temp = seq[j];
                seq[j] = seq[j + 1];
                seq[j + 1] = temp;
                continua = 1; // A Var continua recebe um valor para saber se houve troca
            }
        }
        fim--; // O último já está ordenado, então n começa em uma posição anterior
    } while (continua); // O bloco será executado enquanto houver trocas

    for (int i = 0; i < n; i++)
    {
        printf("%d ", seq[i]);
    }
}