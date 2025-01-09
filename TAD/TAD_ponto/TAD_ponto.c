#include <stdio.h>
#define tam 10
// 1 - receber 10 elementos e mostrar todos//
int main() {
   int i , numero[10];
   int soma = 0;
    printf("digite 10 numeros inteiros\n");
   for(i = 0; i < tam; i++)
   {
       scanf("%d",&numero[i]);
   }
   for ( i = 0; i < tam; i++)
   {
       printf("%d\n",numero[i]);
   }
 
// 2 - mostra o maior numero do vetor// 
    int maior = numero[0];
   for ( i = 0; i < tam; i++)
   {
        if ( numero[i] > maior)
        {
            maior = numero[i];  
        }
  
    }
printf("%d maior numero\n",maior);
 // 3 - calcule a media dos elementos//
            for ( i=0; i < tam; i++)
            {
                soma = soma + numero[i];
            }
             int media;
            media = soma / tam ;
        printf("media: soma de todos os valores inteiros do vetor dividido pelo numero de elemntos do vetor/indice: %d", media);

    return 0;

}
