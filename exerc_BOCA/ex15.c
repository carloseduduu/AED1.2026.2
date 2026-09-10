#include <stdio.h>

int printNumero(int n) {
    if (n == 0){
        return 0;
    }
    printNumero(n-1);
    printf("%d ", n);
}


int main(){
    int n;
    scanf("%d", &n);
    printNumero(n);
    
    return 0;
}