#include <stdio.h>

int main(){
    int horas, minutos, segundos, totalSegundos;
    printf("Digite uma quantidade de horas: \n");
    scanf("%d", &horas);
    printf("Digite uma quantidade de minutos: \n");
    scanf("%d", &minutos);
    printf("Digite uma quantidade de segundos: \n");
    scanf("%d", &segundos);
    totalSegundos = (3600 * horas) + (60 * minutos) + segundos;
    printf("O total de segundos de %dh%dmin%ds é de %d \n", horas, minutos, segundos, totalSegundos);
    return 0;
}