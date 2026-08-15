#include <stdio.h>

int logq (int n) {

    if (n <= 1) {
        return 0;
    }

    return 1 + logq(n/2);
}

int main () {

    int n = 0, result = 0;
    scanf("%d", &n);
    result = logq(n);
    printf("%d", result);

}

