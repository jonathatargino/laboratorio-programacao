#include <stdio.h>

int main(){
    int a, b;
    printf("Escolha os limites da faixa [a-b] ou [b-a] \n");
    printf("Digite o valor de a: \n");
    scanf("%d",&a);
    printf("Digite o valor de a: \n");
    scanf("%d",&b);
    if(b > a){
        for(a; a <= b; a++){
            if(a % 4 == 0){
                printf("O quadrado de %d é %d. \n", a, a * a);
            };
        } 
    } else {
        for(b; b <= a; b++){
            if(b % 4 == 0){
                printf("O quadrado de %d é %d. \n", b, b * b);
            };
        };
        }
    return 0;
}