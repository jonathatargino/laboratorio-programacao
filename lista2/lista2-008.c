#include <stdio.h>

int main(){
    float preco, entrada, parcela;
    int x;
    printf("Digite o valor do produto: \n");
    scanf("%f", &preco);
    x = preco / 3;
    entrada = (preco - x * 3) + x;
    parcela = (preco - entrada)/2;
    printf("O produto de R$%.2f terá a entrada de R$%.2f e duas parcelas de R$%.2f cada. \n", preco, entrada, parcela);
    return 0;
}