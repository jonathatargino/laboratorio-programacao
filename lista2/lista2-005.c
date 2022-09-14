#include <stdio.h>

int main(){
    int qntNumeros = 0, menor, maior, n;
    while(n != 0){
         printf("------------DIGITE 0 PARA SAIR------------ \n");
        printf("Digite um número inteiro: \n");
        scanf("%d", &n);
        if(n != 0){
            if(qntNumeros == 0){
                maior = n;
                menor = n;
            } else{
                if(n > maior){
                    maior = n;
                }
                if(n < menor){
                    menor = n;
                }
            }
            qntNumeros++;
        };
    };
    if(qntNumeros == 0){
        printf("Você não digitou nenhum número. \n");
    } else {
        printf("Dos %d números digitados, o maior foi %d e o menor %d. \n", qntNumeros, maior, menor);
    };
    return 0;
}