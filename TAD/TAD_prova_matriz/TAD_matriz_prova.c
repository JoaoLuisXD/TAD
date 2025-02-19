#ifndef __TAD_MATRIZ_PROVA_C__
#define __TAD_MATRIZ_PROVA_C__
#include "TAD_matriz_prova.h"

MMatriz cria_matriz (int l,int c)
{
    MMatriz mat = (MMatriz)malloc(sizeof(Matriz));
    mat->linhas = l;
    mat->colunas = c;

    float **valor = (float**)malloc(l*sizeof(float*));
    for(int i=0;i<l;i++)
    {
        valor[i] - (float*)malloc(c*sizeof(float));
        for(int j=0;j<c;j++)
        {
            scanf("%f",&mat->valor[i][j]);
        }
    }
    return mat;
}
void libera_matriz(MMatriz mat)
{
    for(int i=0;i<mat->linhas;i++)
    {
        free(mat->valor[i]);
    }
    free(mat->valor);
    free(mat);
}
float acessa_matriz(MMatriz mat,int i,int j)
{
    return mat->valor[i][j];
}



#endif