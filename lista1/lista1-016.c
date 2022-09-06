#include <stdio.h>

int main(){
    float valorHora, desconto, bruto, liquido;
    int horas;
    printf("Qual é o valor da hora de aula desse professor? \n");
    scanf("%f", &valorHora);
    printf("Quantas horas ele trabalhou esse mês? \n");
    scanf("%d", &horas);
    printf("Qual é a porcentagem de desconto do INSS? \n");
    scanf("%f", &desconto);
    bruto = valorHora * horas;
    liquido = bruto - (bruto * (desconto/100));
    printf("Renda bruta: R$%.2f \n", bruto);
    printf("Renda líquida: R$%.2f \n", liquido);
    return 0;
}