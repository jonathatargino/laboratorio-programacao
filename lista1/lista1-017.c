#include <stdio.h>
#include <math.h>

int main(){
    int x, modulo;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    modulo = fabs(x);
    printf("O módulo de %d é %d", x, modulo);
    return 0;
}