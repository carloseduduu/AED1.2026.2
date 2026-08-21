#include <stdio.h>
#define ANO_BASE 1986
#define DIAS_POR_ANO 365.25
#define VOLTA_EM_DIAS 27759

int main() {
    int A = 0;
    float diferenca_dias = 0;
    int quant_voltas = 0, proximo_ano = 0;

    scanf("%d", &A);

    if (A > ANO_BASE)
    {
        diferenca_dias = ((A - ANO_BASE) * DIAS_POR_ANO);
    } else {
        diferenca_dias = ((ANO_BASE - A) * DIAS_POR_ANO);
    }

    quant_voltas = (int) (diferenca_dias / VOLTA_EM_DIAS);

    if (A >= ANO_BASE) {
        proximo_ano = ANO_BASE + (quant_voltas + 1) * 76;
    } else {
        proximo_ano = ANO_BASE - quant_voltas * 76;

        if (proximo_ano <= A) {
            proximo_ano += 76;
        }
    }

    printf("%d\n", proximo_ano);

    return 0;

}