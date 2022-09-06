#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z, mediaArit, mediaGeo;
    printf("Digite o primeiro número inteiro: \n");
    scanf("%f",&x);
    printf("Digite o segundo número inteiro: \n");
    scanf("%f",&y);
    printf("Digite o terceiro número inteiro: \n");
    scanf("%f",&z);
    mediaArit = (x + y + z)/3;
    mediaGeo = pow((x * y * z), 1.0/3.0);
    printf("Média aritmética: %f\n", mediaArit);
    printf("Média geométrica: %f\n", mediaGeo);
}