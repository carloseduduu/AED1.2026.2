#include <stdio.h>
#define PI 3.14159

int main() {
    
    float area, r, h;

    scanf("%f %f", &r, &h);

    area = 2.0*(PI*r*r)+(2.0*PI*r*h);

    printf("O VALOR DO CUSTO E = %.2f", area*100.00);

    return 0;
}