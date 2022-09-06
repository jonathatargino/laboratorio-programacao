#include <stdio.h>

int main(){
    float altura, pesoIdeal;
    char sexo;
    printf("Qual sua altura, em metros? \n");
    scanf("%f", &altura);
    printf("Qual seu sexo? [M/F]\n");
    scanf(" %c", &sexo);
    switch(sexo){
        case 'M':
            pesoIdeal = 72.7 * altura - 58;
            break;
        case 'F':
            pesoIdeal = 62.1 * altura - 44.7;
            break;
    };
    printf("O seu peso ideal é de %.2f \n", pesoIdeal);
    return 0;
}