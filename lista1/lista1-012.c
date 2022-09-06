#include <stdio.h>

int main(){
    int primeiro, segundo;
    printf("Digite um número inteiro: \n");
    scanf("%d", &primeiro);
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &segundo);
    printf("A soma de %d e %d é de %d. \n", primeiro, segundo, primeiro + segundo);
    printf("O produto de %d e %d é de %d. \n", primeiro, segundo, primeiro * segundo);
    printf("A diferença de %d e %d é de %d. \n", primeiro, segundo, primeiro - segundo);
    printf("O quociente de %d e %d é de %.2f. \n", primeiro, segundo, (float)primeiro / segundo);
    printf("O resto da divisão de %d por %d é de %d. \n", primeiro, segundo, primeiro % segundo);
    return 0;
}