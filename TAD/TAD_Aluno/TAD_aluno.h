#include <stdio.h>
#include <stdlib.h>
struct aluno
{
    int matricula;
    char nome[100];
    int idade;
    char curso[100];
};
typedef struct aluno Aluno;
typedef Aluno *AAluno;

AAluno *cria_aluno(int n);
void insere_aluno(AAluno *a,int n);
void busca_aluno(AAluno *a, int n,int m);
void listar_aluno(AAluno *a, int n);
void remove_aluno(AAluno *a, int n,int m);
void libera_aluno(AAluno *a, int n);
void modifica_aluno(AAluno *a, int n,int m);


#include "TAD_aluno.c"