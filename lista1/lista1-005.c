#include <stdio.h>

int main(){
    float x;
    float valorFinal;
    printf("Digite o valor da conta: \n");
    scanf("%f", &x);
    valorFinal = x * 1.1;
    printf("O valor final a ser pago é de %.2f \n", valorFinal);
    return 0;
}