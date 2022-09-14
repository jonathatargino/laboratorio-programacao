#include <stdio.h>

int main(){
    int inicial, final, soma = 0;
    float media;
    printf("Digite o valor inicial do seu limite: \n");
    scanf("%d", &inicial);
    printf("Digite o valor final do seu limite: \n");
    scanf("%d", &final);
    for(int i = inicial; i <= final; i++){
        soma += i;
    };
    media = (float)soma/ ((final - inicial) + 1);
    printf("A média aritmética dos números no intervalo %d e %d é %.2f\n", inicial, final, media);
    return 0;
}