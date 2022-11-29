#include <stdio.h>
#define TAM 3

struct aluno{
    float nota1;
    float nota2;
    float media;
};

float calculaMedia(struct aluno *, int);

int main()
{
    struct aluno alunos[3];   
    
    for(int i = 0; i < 3; i++){
      printf("Primeira nota do %dº aluno:", i+1);
      scanf("%f", &(alunos+i)->nota1);
      
      printf("Segunda nota do %dº aluno:", i+1);
      scanf("%f", &(alunos+i)->nota2);
    }
    
    printf("A média desses alunos é de %.2f \n", calculaMedia(alunos, TAM));
    

    return 0;
}

float calculaMedia(struct aluno *v, int tamanho){
  float soma = 0;
  for(int i = 0; i < tamanho; i++){
    soma += ((v + i)->nota1 + (v + i)->nota2)/2;
  }
  return (soma/tamanho);
}