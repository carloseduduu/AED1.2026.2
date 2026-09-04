#include <stdio.h>

int main() {
    int t, i;
    long double m[51], n[51];
    
    scanf("%d", &t);
    for (i=0;i<t;i++) {
        scanf("%Lf %Lf", &m[i], &n[i]);
    }

    for (i=0;i<t;i++)
    {
        printf("%.0Lf", m[i]*n[i]);
        if (!(i== t-1)) {
            printf("\n");
        } else {
            printf("\n\n\n");
        }
    }

    return 0;
}