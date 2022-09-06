#include <stdio.h>

int main(){
    int x, invertido;
    printf("Digite um número inteiro de três dígitos: \n");
    scanf("%d", &x);
    invertido = (x % 10) * 100 + (x % 100 - x % 10) + (x - (x % 100) )/ 100;
    printf("O valor invertido é %d", invertido);
    return 0;
}