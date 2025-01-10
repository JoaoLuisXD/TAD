#include <stdlib.h>

struct ponto
{
    float x;
    float y;
};

typedef struct ponto Ponto;
typedef struct ponto * PPonto;

PPonto criar_ponto(float x, float y);

#include "TAD_ponto.c"