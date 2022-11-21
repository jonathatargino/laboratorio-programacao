#include <stdio.h>

struct estoque {
    char nomePeca[40];
    int id;
    float preco;
    int numPedido;
    
};

int main()
{
    struct estoque peca1;
    
    puts("Nome da peça: ");
    fgets(peca1.nomePeca, 40, stdin);
    
    puts("Número de identificação: ");
    scanf("%d", &peca1.id);
    
    puts("Preço do produto: ");
    scanf("%f", &peca1.preco);
    
    puts("Número do pedido: ");
    scanf("%d", &peca1.numPedido);
    
    printf("Nome: %s \n ID: %d \n Preço: R$%.2f \n Número: %d", peca1.nomePeca, peca1.id, peca1.preco, peca1.numPedido);

    return 0;
}
