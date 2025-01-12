#include<stdlib.h>
#include "../TAD_ponto/TAD_ponto.h"

struct circulo
{
    Ponto* p;
    float raio;
};

typedef struct circulo Circulo;
typedef Circulo *CCirculo;

CCirculo cria_circ(float x,float y,float raio);
void libera_circ(CCirculo c);
float area_circ(CCirculo c);
int interior_circ(CCirculo c, PPonto p);

#include "TAD_circulo.c"