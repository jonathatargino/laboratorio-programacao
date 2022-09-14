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
            if(i % 3 == 0){
                total += 1;
            };
        }
        printf("Na faixa %d-%d temos %d números divisíveis por 3.\n", a, b, total);
    } else {
        for(int i = b; i <= a; i++){
            if(i % 3 == 0){
                total += 1;
            };
        };
        printf("Na faixa %d-%d temos %d números divisíveis por 3.\n", b, a, total);
    }
    return 0;
}