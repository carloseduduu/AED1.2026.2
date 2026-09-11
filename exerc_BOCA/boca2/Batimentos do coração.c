#include <stdio.h>
#define ANO 365.25
int main() {
    int idade;
    double seg, min, h, dias;
    scanf("%d", &idade);

    seg = ((idade*ANO)*24*60*60);

    printf("%.2f", seg);
    return 0;
}