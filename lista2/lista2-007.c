#include <stdio.h>

int main(){
    float dividendo, divisor = 0, resultado;
    printf("Digite o dividendo: \n");
    scanf("%f", &dividendo);
    while(divisor == 0){
        printf("Digite o divisor (não pode ser 0): \n");
        scanf("%f", &divisor);
    };
    resultado = dividendo / divisor;
    printf("O resultado dessa divisão é %.2f \n", resultado);
    return 0;
}