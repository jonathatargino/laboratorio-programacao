#include <stdio.h>

int main(){
    int branco = 0, nulo = 0, paulo = 0, renata = 0, v, total;
    char confirm;
    while(v >= 0){
        printf("[0] = branco, [5] = paulo, [7] = renata. Qualquer outro número será considerado nulo. \n");
        printf("Escolha seu voto: \n");
        scanf("%d", &v);
        if(v < 0){
            break;
        }
        else{
            switch(v){
                case 0:
                    printf("Tem certeza que quer votar em branco? [S/N] \n");
                    scanf(" %c", &confirm);
                    if(confirm == 'S'){
                        printf("Voto escolhido: Em branco \n");
                        branco += 1;
                    };
                    break;
                case 5:
                    printf("Tem certeza que quer votar em Paulo? [S/N] \n");
                    scanf(" %c", &confirm);
                    if(confirm == 'S'){
                        printf("Voto escolhido: Paulo \n");
                        paulo += 1;
                    };
                    break;
                case 7:
                    printf("Tem certeza que quer votar em Renata? [S/N] \n");
                    scanf(" %c", &confirm);
                    if(confirm == 'S'){
                        printf("Voto escolhido: Renata \n");
                        renata += 1;
                    };
                    break;
                default:
                    printf("Tem certeza que quer votar nulo? [S/N] \n");
                    scanf(" %c", &confirm);
                    if(confirm == 'S'){
                        printf("Voto escolhido: Nulo \n");
                        nulo += 1;
                    };
                    break;
            };
        };
    };
    total = branco + nulo + paulo + renata;
    printf("Total de votos: %d \n", total);
    printf("Eleito: ");
    paulo == renata ? puts("Empatado. \n") : paulo > renata? puts("Paulo. \n") : puts("Renata. \n");
    printf("Votos em Paulo: %.2f%% \n", ((float)paulo / total) * 100);
    printf("Votos em Renata: %.2f%% \n", ((float)renata / total) * 100);
    printf("Votos em branco: %.2f%% \n", ((float)branco / total) * 100);
    printf("Votos nulos: %.2f%% \n", ((float)nulo / total) * 100);
    return 0;
}