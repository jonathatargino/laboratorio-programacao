#include <stdio.h>

int main(){
    int a, b;
    printf("Trocador de Valores \n");
    printf("Digite um número inteiro para a: \n");
    scanf("%d", &a);
    printf("Digite um número inteiro para b: \n");
    scanf("%d", &b);
    a  = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("Valor de a = %d, valor de b = %d", a, b);
    return 0;
}