#include <stdio.h>

int main(){
    int x;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    printf("O triplo desse valor é de %d, seu quadrado é %d e sua metade %.1f \n", x * 3, x * x, (float)x / 2);
    return 0;
}