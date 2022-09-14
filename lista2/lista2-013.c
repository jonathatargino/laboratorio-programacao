#include <stdio.h>

int main(){
    int a, b, total = 0;
    printf("Escolha os limites da faixa [a-b] ou [b-a] \n");
    printf("Digite o valor de a: \n");
    scanf("%d",&a);
    printf("Digite o valor de b: \n");
    scanf("%d",&b);
    if(b > a){
        for(int i = a; i <= b; i++){
            if(i % 2 == 0){
                total += i;
            };
        }
        printf("O somatório de números pares na faixa %d-%d é de %d \n", a, b, total);
    } else {
        for(int i = b; i <= a; i++){
            if(i % 2 == 0){
                total += i;
            };
        };
        printf("O somatório de números pares na faixa %d-%d é de %d \n", b, a, total);
    }
    return 0;
}