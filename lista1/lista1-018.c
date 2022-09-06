#include <stdio.h>

int main(){
    float raio, circunferencia, area, pi;
    pi = 3.14159;
    printf("Digite o raio do círculo, em centímetros: \n");
    scanf("%f", &raio);
    printf("A circunferência desse círculo é de %.2f centimetros.  \n", 2 * pi * raio);
    printf("A área desse círculo é de %.2f centímetros quadrados.  \n", 2 * pi * raio * raio);
    return 0;
}