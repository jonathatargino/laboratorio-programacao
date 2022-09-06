#include <stdio.h>

int main()
{
    float comprimento, largura, altura, volume;
    printf("Informe as medidas em centrímetro \n");
    printf("Comprimento da caixa: \n");
    scanf("%f", &comprimento);
    printf("Largura da caixa: \n");
    scanf("%f", &largura);
    printf("Altura da caixa: \n");
    scanf("%f", &altura);
    volume = comprimento * largura * altura;
    printf("O volume da caixa é de %.2f centímetros cúbicos. \n", volume);
} 