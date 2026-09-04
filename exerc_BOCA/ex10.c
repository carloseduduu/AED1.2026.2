#include <stdio.h>
#include <math.h>
#define PI 3.14159265

float areaCirc(int raio) {
    float area, r;
    r = raio;
    area = (PI*(r*r));
    return area;
}

float areaElipse(int raioMaior, int raioMenor) {
    float area, R = raioMaior, r = raioMenor;
    area = PI*R*r;
    return area;
}

float areaTriangulo(int a, int b, int c) {
    float area, p;
    p = ((float)(a+b+c))/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    return area;
}

float areaTrapezio(int B, int b, int h) {
    float area;
    area = (((float)(B+b))*(float)(h))/2;
    return area;
}

int main() {
    unsigned short int n, a, b, c;
    float listaSaida[1000] = {0};
    int i, j;
    char fig;
    scanf("%hu", &n);
    for (i=0;i<n;i++)
    {
        scanf(" %c", &fig);
        switch(fig)
        {
            case 'C': 
                scanf(" %hu", &a);
                listaSaida[i] = (areaCirc(a));
                break;
            case 'E':
                scanf(" %hu %hu", &a, &b);
                listaSaida[i] = areaElipse(a, b);
                break;
            case 'T':
                scanf(" %hu %hu %hu", &a, &b, &c);
                listaSaida[i] = areaTriangulo(a, b, c);
                break;
            case 'Z':
                scanf(" %hu %hu %hu", &a, &b, &c);
                listaSaida[i] = areaTrapezio(a, b, c);
                break;
            default:
                break;
        }

    }

    for(j=0;j<n;j++){
        printf("%.0f", listaSaida[j]);
        if (j!=n-1) {
            printf("\n");
        }
    }

    return 0;
}