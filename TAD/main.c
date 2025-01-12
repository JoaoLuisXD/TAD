#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TAD_circulo/TAD_circulo.h"
#define PI 3.14159

int main()
{
    PPonto p = cria_ponto(2,3);
    PPonto q = cria_ponto(4,5);
    printf("PONTO 1: ");
    printf("%.2f, %.2f\n",p->x,p->y);
    printf("PONTO 2: ");
    printf("%.2f, %.2f\n",q->x,q->y);
    float d = distancia_ponto(p,q);
    printf("DISTANCIA ENTRE OS PONTOS: %.2f\n",d);
    float a,b;
    printf("VALORES DE |A| E |B| ANTES DA TROCA DO PONTO P: ");
    printf("%.2f, %.2f\n",a,b);
    acessa_ponto(p,&a,&b);
    printf("VALORES DE |A| E |B| DEPOIS DA TROCA DO PONTO P: ");
    printf("%.2f, %.2f\n",a,b);
    float t,u;
    printf("DIGITE 2 VALORES QUE VOCE QUER ATRIBUIR A ESTRUTURA DE PONTO: \n");
    scanf("%f",&t);
    scanf("%f",&u);
    printf("VALORES DE |X| E |Y| ANTES DA ATRIBUICAO DO PONTO Q: ");
    printf("%.2f, %.2f\n",q->x,q->y);
    atribui_ponto(q,t,u);
    printf("VALORES DE |X| E |Y| DEPOIS DA ATRIBUICAO DO PONTO Q: ");
    printf("%.2f, %.2f\n",q->x,q->y);


    //CCirculo a = circ_cria(2,3,10);
   
   //printf("%f\n",a->p->x);
   //printf("%f\n",a->p->y);
   //printf("%f",a->raio); 
   return 0;
}