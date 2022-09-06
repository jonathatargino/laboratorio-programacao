#include <stdio.h>

int main(){
    int x, quadrado;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    quadrado = x * x;
    printf("O quadrado de %d é %d", x, quadrado);
    return 0;
}