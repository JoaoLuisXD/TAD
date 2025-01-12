#ifndef __TAD_CIRCULO_C__
    #define __TAD_CIRUCLO_C__

    
    CCirculo circ_cria(float x,float y,float raio)
    {
        CCirculo c = (CCirculo)malloc(sizeof(Circulo));
        c->p =cria_ponto(x,y);
        c->raio = raio;
        return c;
    }

#endif