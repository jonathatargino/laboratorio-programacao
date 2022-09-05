#include <stdio.h>

int main(){
    float x;
    printf("Digite um número real: \n");
    scanf("%f", &x);
    printf("Esse valor, com uma casa decimal, é %.1f \n",x);
    return 0;
}