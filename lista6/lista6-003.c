#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 100

void preencheVetor(int *, int, int);
void imprimeVetor(int *, int);
float mediaVetor(int *, int);

struct array{
    int *p;
    int qntElementos;
    float media;
};


int main(){
    srand(time(NULL));
    
    int v[TAM];
    
    struct array v1;
    
    v1.p = v;
    v1.qntElementos = TAM;
    
    preencheVetor(v, TAM, MAX);
    
    v1.media = mediaVetor(v, TAM);
    
    imprimeVetor(v, TAM);
    
    printf("Ponteiro para o vetor: %p \n", v1.p);
    printf("Quantidade de elementos: %d \n", v1.qntElementos);
    printf("Média de valores: %.1f", v1.media);
    

    return 0;
}

void preencheVetor(int *p, int tamanho, int maxVal){
    for(int i = 0; i < tamanho; i++){
        *(p+i) = rand() % maxVal;
    }
}

void imprimeVetor(int *p, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
}

float mediaVetor(int *p, int tamanho){
    float soma = 0;
    
    for(int i = 0; i < tamanho; i++){
        soma += *(p+i);
    }
    
    float media = soma/tamanho;
    return media;
}

