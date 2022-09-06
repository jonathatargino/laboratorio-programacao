#include <stdio.h>

int main(){
    float valorDolar, qntReais, qntDolares;
    printf("Qual é a cotação atual do dólar? \n");
    scanf("%f", &valorDolar);
    printf("Quantos reais você deseja converter para dólar? \n");
    scanf("%f", &qntReais);
    qntDolares = qntReais / valorDolar;
     printf("Convertendo R$%.2f teremos $%.2f \n", qntReais, qntDolares);
    return 0;
}