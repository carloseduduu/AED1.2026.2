#include <stdio.h>

int Inverte(int x)
{
    int und, dez, cent;

    // Decompor dígitos
    cent = (x / 100);
    dez = ((x / 10) % 10);
    und = (x % 10);

    int valor_invertido = (und * 100 + dez * 10 + cent * 1);

    return valor_invertido;
}

int main(void)
{

    int A = 0, B = 0, A1 = 0, B1 = 0;

    while (A == B)
    {
        scanf("%d %d", &A, &B);
    }

    A1 = Inverte(A);
    B1 = Inverte(B);

    if (A1 > B1)
    {
        printf("%d\n", A1);
    }
    else
    {
        printf("%d\n", B1);
    }

    return 0;
}