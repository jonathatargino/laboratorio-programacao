#include <stdio.h>

int main(){
    int x, y;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    printf("Digite outro número inteiro: \n");
    scanf("%d", &y);
    if(y * (x / y) == x){
        printf("%d é múltiplo de %d.", x, y);
    }
    else{
        printf("%d não é múltiplo de %d.", x, y);
    }
    return 0;
}