#ifndef __TAD_CIRCULO_C__
    #define __TAD_CIRUCLO_C__

    
CCirculo cria_circ(float x,float y,float raio)
    {
        CCirculo c = (CCirculo)malloc(sizeof(Circulo));
        c->p =cria_ponto(x,y);
        c->raio = raio;
        return c;
    }
void libera_circ(CCirculo c)
{
    libera_ponto(c->p);
    free(c);
}
float area_circ(CCirculo c)
{
    return PI * (c->raio * c->raio);
}
int interior_circ(CCirculo c,PPonto p)
{
    float d = distancia_ponto(c->p,p);
    return(d<c->raio);
}
#endif