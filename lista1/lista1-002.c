#include <stdio.h>

int main(){
    int x;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    printf("%d em hexadecimal: %x \n", x,x);
    printf("%d em octal: %o \n", x,x);
    return 0;
}