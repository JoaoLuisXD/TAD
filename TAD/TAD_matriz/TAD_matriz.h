#include <stdlib.h>
struct matriz
{
    int linhas;
    int colunas;
    float **v;
};
typedef struct matriz Matriz;
typedef Matriz *MMatriz;
MMatriz cria_mat(int m, int n);
void libera_mat(MMatriz mat);
float acessa_mat(MMatriz mat,int i, int j);
void atribui_mat(MMatriz mat, int i, int j, float v);
int linhas_mat(MMatriz mat);
int colunas_mat(MMatriz mat);

#include "TAD_matriz.c"