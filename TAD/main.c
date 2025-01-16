#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TAD_circulo/TAD_circulo.h"
#include "TAD_matriz/TAD_matriz.h"

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
    printf("\n");
    PPonto l = soma_ponto(p,q);
    printf("|%.2f|\n",l->x);
    printf("|%.2f|\n",l->y);


    /*CCirculo a = cria_circ(2,3,5);
   
    printf("VALOR DE X: %.2f\n",a->p->x);
    printf("VALOR DE Y: %.2f\n",a->p->y);
    printf("VALOR DO RAIO: %.2f\n",a->raio); 
    printf("A AREA DO CIRCULO E: %.2f\n",area_circ(a));
    if(interior_circ(a,p))
    {
        printf("OS PONTOS ESTAO DENTRO DO CIRCULO !! \n");
    }
    else printf("OS PONTOS ESTAO FORA DO CIRCULO\n");*/

    /*int a,b;
    float v;
    printf("DIGITE A QUANTIDADE DE LINHAS: ");
    scanf("%d",&a);
    printf("DIGITE A QUANTIDADE DE COLUNAS: ");
    scanf("%d",&b);
    MMatriz matrix = cria_mat(a,b);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("|%d||%d|: |%.2f|\n",i,j,acessa_mat(matrix,i,j));
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            atribui_mat(matrix,a,b,matrix);
        }
    }*/

   return 0;
}