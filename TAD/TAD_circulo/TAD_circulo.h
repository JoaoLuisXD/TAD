#include<stdlib.h>
#include "../TAD_ponto/TAD_ponto.h"

struct circulo
{
    Ponto* p;
    float raio;
};

typedef struct circulo Circulo;
typedef Circulo *CCirculo;

CCirculo circ_cria(float x,float y,float raio);
void cir_libera(CCirculo c);
float circ_area(CCirculo c);
int circ_interior(CCirculo c, float x, float y);

#include "TAD_circulo.c"