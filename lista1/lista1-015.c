#include <stdio.h>

int main(){
    int diasTrabalhados;
    float pagamento;
    printf("Número de dias trabalhados pelo vendedor: \n");
    scanf("%d", &diasTrabalhados);
    if(diasTrabalhados <= 10){
        pagamento = (diasTrabalhados * 50.25) * 0.9;
    }
    else if(diasTrabalhados <= 20){
        pagamento = ((diasTrabalhados * 50.25) * 1.2) * 0.9;
    }
    else{
        pagamento = ((diasTrabalhados * 50.25) * 1.3) * 0.9;
    };
    printf("Com %d dias trabalhados, o vendedor ganhará o valor líquido de %.2f", diasTrabalhados, pagamento);
    return 0;
}