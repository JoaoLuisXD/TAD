#include <stdio.h>
#include "TAD_ponto/TAD_ponto.h"


int main()
{
    struct ponto * p1 = criar_ponto(1,2);

    printf("%f %f", p1->x, p1->y);
    return 0;
}