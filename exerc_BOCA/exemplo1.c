#include <stdio.h>
#define ANO 365.25
int main()
{
    int idade;
    float dias;
    scanf("&d", &idade);
    dias = idade * ANO * 24 * 60 * 60;
    printf("O CORACAO BATEU %.2f VEZES\n", dias);

    return 0;
}