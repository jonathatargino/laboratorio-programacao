#include <stdio.h>

int main(){
    float tempC, tempF;
    printf("Digite uma temperatura, em graus Celsius: \n");
    scanf("%f", &tempC);
    tempF = (9 * tempC + 160) / 5;
    printf("%.1f°C em Fahrenheit é de %.1f°F \n",tempC,tempF);
    return 0;
}