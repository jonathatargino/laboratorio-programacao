#include <stdio.h>

int main(){
    int x, inicial;
    int fatorial = 1;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    inicial = x;
    for(x; x > 0; x--){
        fatorial *= x;
    };
    printf("O fatorial de %d é %d. \n", inicial, fatorial);
    return 0;
}