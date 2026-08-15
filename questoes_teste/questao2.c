#include <stdio.h>

int main()
{

    float P1 = 0, P2 = 0, PF = 0;
    scanf("%f", &P1);
    scanf("%f", &P2);

    PF = (2.0 * P1) + (3.0 * P2) / 5.0;

    if (PF >= 7.0)
    {
        printf("Vitorioso\n");
    }
    else if (PF < 3)
    {
        printf("Derrotado\n");
    }
    else
    {
        printf("Julgamento Final\n");
    }
}