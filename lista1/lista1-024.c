#include <stdio.h>

int main(){
    int x, n, resultado;
    printf("Fórmula: x * 2^n \n");
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    resultado = x * 2 << (n-1);
    printf("O resultado é %d \n", resultado);
    return 0;
}