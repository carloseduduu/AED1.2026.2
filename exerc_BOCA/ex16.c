#include <stdio.h>

int calcularFibonacci(int n){
    //Caso base
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return (calcularFibonacci(n-1) + calcularFibonacci(n-2));
}

int main(){
    int n, i;
    scanf("%d", &n);
    calcularFibonacci(n);
    return 0;
}