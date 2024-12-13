#include "TAD_ponto.h"
//
// FUNCAO PARA CRIAR UM PONTO
//
PPonto ponto_cria(float x, float y)
{
    PPonto ponto = (PPonto)malloc(sizeof(Ponto));
    ponto->x = x;
    ponto->y = y;
    return ponto;
}