#include <stdio.h>

struct aluno{
    float nota1;
    float nota2;
    float media;
};

int main()
{
    struct aluno novoAluno;
    
    puts("Primeira nota do aluno:");
    scanf("%f", &novoAluno.nota1);
    
    puts("Segunda nota do aluno:");
    scanf("%f", &novoAluno.nota2);
    
    novoAluno.media = (novoAluno.nota1 + novoAluno.nota2)/2;
    
    printf("A primeira nota desse aluno foi %.1f, já a segunda foi de %.1f \n", novoAluno.nota1, novoAluno.nota2);
    printf("Logo, sua média foi de %.1f", novoAluno.media);
    

    return 0;
}
