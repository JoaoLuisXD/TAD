#include <stdlib.h>
#include <stdio.h>
struct matriz
{
    int linhas;
    int colunas;
    float **valor;
};
typedef struct matriz Matriz;
typedef Matriz * MMatriz;

MMatriz cria_matriz(int l, int c);
void libera_matriz(MMatriz mat);
void acessa_matriz(MMatriz mat,int l,int c);



#include "TAD_matriz_prova.c"