#include <stdio.h>

int main(){
    int segundos, horas, minutos;
    printf("Digite uma quantidade de segundos: \n");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos -= horas * 3600;
    minutos = segundos / 60;
    segundos -= minutos * 60;
    printf("%dh%dmin%ds\n", horas, minutos, segundos);
    return 0;
}