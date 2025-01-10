#include <stdio.h>
#include "TAD_circulo/TAD_circulo.h"
#define PI 3,14159

int main()
{
    PPonto p = criar_ponto(2,3);
    CCirculo a = circ_cria(2,3,10);
   
   printf("%f\n",a->p->x);
   printf("%f\n",a->p->y);
   printf("%f",a->raio); 
   
   return 0;
}