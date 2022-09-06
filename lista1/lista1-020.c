#include <stdio.h>

int main(){
    int x;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    switch(x % 2){
        case 0:
            printf("%d é um número par", x);
            break;
        default:
            printf("%d é um número impar", x);
            break;
    }
    return 0;
}