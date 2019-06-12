#include <stdio.h>
void main()
{
   float x,y;
   printf("Insira o valor do ponto no eixo x:");
   scanf("%f", &x);
   printf("Insira o valor do ponto no eixo y:");
   scanf("%f", &y);
    if(x>0 && y>0){
        printf("Primeiro Quadrante!\n");
    }else if(x<0 && y>0){
        printf("Segundo Quadrante!\n");
    }else if(x<0 && y<0){
        printf("Terceiro Quadrante!\n");
    }else if(x>0 && y<0){
        printf("Quarto Quadrante!\n");
    }
}