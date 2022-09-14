#include <stdio.h>

int main(){
    char dia = 1;
    while(dia != '0'){
        printf("------------DIGITE 0 PARA SAIR------------ \n");
        printf("Digite o número de um dia da semana [1-7]: \n");
        scanf(" %c",&dia);
        switch(dia){
            case '0':
                printf("Desligando sistema... \n");
                break;
            case '1':
                printf("Dia %c é domingo! \n", dia);
                break;
            case '2':
                printf("Dia %c é segunda-feira! \n", dia);
                break;
            case '3':
                printf("Dia %c é terça-feira! \n", dia);
                break;
            case '4':
                printf("Dia %c é quarta-feira! \n", dia);
                break;
            case '5':
                printf("Dia %c é quinta-feira! \n", dia);
                break;
            case '6':
                printf("Dia %c é sexta-feira! \n", dia);
                break;
            case '7':
                printf("Dia %c é sábado! \n", dia);
                break;
            default:
                printf("Você não digitou um número válido. Tente novamente. \n");
                break;
        }
    }


    return 0;
}