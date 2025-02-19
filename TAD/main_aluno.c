#include <stdio.h>
#include "TAD_Aluno/TAD_aluno.h"
int main()
{
    int n;
    printf("quantos alunos voce que criar: ");
    scanf("%d",&n);
    AAluno * aula = cria_aluno(n);
    insere_aluno(aula,n);
    int mat;
    printf("\ndigite a matricula que voce quer procurar: ");
    scanf("%d",&mat);
    busca_aluno(aula,n,mat);
    printf("\nLISTA DE ALUNOS DE A SEGUIR\n------------------------\n");
    listar_aluno(aula,n);
    printf("\ndigite a matricula de um aluno que queira remover: ");
    scanf("%d",&mat);
    remove_aluno(aula,n,mat);
    printf("\napos a remocao\n------------\n");
    listar_aluno(aula,n);
    printf("digite a matricula do aluno que quer modificar: ");
    scanf("%d",&mat);
    int escolha;
    printf("digite o que voce quer mudar\n");
    printf("1 : nome\n");
    printf("2 : idade\n");
    printf("3 : curso\n");
    modifica_aluno(aula,n,mat);

    libera_aluno(aula,n);
    return 0;
}