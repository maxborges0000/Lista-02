#include <stdio.h>
#include <math.h>
void main()
{
   int qtn, vet[qtn];
   float x, soma, media, desvio, y;
   printf("Digite quantos valores ir� inserir:");
   scanf("%d", &qtn);
   for(int i = 1; i <= qtn; i++){
       printf("Informe o %d� valor:", i);
       scanf("%f", &x);
       soma = soma + x;
   }
   media = soma/qtn;
   for(int i = 0; i <= qtn; i++){
       y = pow(vet[i] - media,2);
   }
   desvio = sqrt(y / qtn);
   printf("media = %.2f\n", media);
   printf("desvio padr�o = %.2f", desvio);
}
