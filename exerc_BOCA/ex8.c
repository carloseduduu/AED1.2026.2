#include <stdio.h>

int ePrimo (int num) {
    int i, n = num;
    for (i=2; i < n; i++)
    {
        if (n%i == 0 && (n != i)) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num[101], N, i;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (ePrimo(num[i]) == 1) {
            printf("primo");
        } else {
            printf("composto");
        }

        if (!(i == N-1)) {
                printf("\n");
            } else {
                printf("\n\n");
            }
    }

    return 0;
}