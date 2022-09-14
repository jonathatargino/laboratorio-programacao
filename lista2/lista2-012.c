#include <stdio.h>

int main(){
    int x;
    printf("Digite um número inteiro: \n");
    scanf("%d",&x);
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d \n", x, i, x*i);
    }
    return 0;
}