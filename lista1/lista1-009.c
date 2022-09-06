#include <stdio.h>

int main(){
    int x;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    printf("Seu sucessor é %d e seu antecessor é %d", x+1, x-1);
    return 0;
}