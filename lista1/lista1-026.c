#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;
    float d;
    printf("Digite o x da primeira coordenada: \n");
    scanf("%d", &x1);
    printf("Digite o y da primeira coordenada: \n");
    scanf("%d", &y1);
    printf("Digite o x da segunda coordenada: \n");
    scanf("%d", &x2);
    printf("Digite o y da segunda coordenada: \n");
    scanf("%d", &y2);
    d = sqrt(sqrt(x2 - x1) + sqrt(y2 - y1));
    printf("A distância entre os dois pontos é de %.2f", d);
    return 0;
}