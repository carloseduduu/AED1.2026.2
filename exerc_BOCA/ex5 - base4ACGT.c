#include <stdio.h>
#include <string.h>

int Base4(int valor)
{
    int resto, i, a, multiplicador = 1, resultado = 0;
    a = valor;
    for (i = 0; a != 0; i++)
    {   
        resto = a % 4;
        resultado += resto * multiplicador;
        a = a/4;
        multiplicador *= 10;
    }

    return resultado;
}

int main(void)
{
    int n, i;
    char base[] = "ACGT";
    scanf("%d", &n);
    int lista[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &lista[i]);
    }

    int j, saida, valor;
    char texto[100];

    for (i = 0; i < n; i++)
    {
        valor = Base4(lista[i]);

        sprintf(texto, "%d", valor);

        for (j = 0; j < strlen(texto); j++)
        {
            int digito = texto[j] - '0';
            printf("%c", base[digito]);
        }
        printf("\n");
    }

    return 0;
}