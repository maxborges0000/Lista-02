//10. Fa�a um programa em C que tenha 4 fun��es, para as quatro opera��es matem�ticas (com retorno void); Cada fun��o deve fazer a opera��o matem�tica usando como par�metros 2 valores passados como ponteiros.


int soma(int* N1, int* N2)
{
    *N1 + *N2;
    return;
}

int subtracao(int* N1, int* N2)
{
    *N1 - *N2;
    return;
}

int divisao(int* N1, int* N2)
{
    *N1 / *N2;
    return;
}
int multiplicacao(int* N1, int* N2)
{
    *N1 * *N2;
    return;
}


int main(){
    int v1, v2, resultado, op;
    printf("\t\t*******CALCULADORA*********\n");
    printf("\t\tSoma = 1\n");
    printf("\t\tSubtra��o = 2\n");
    printf("\t\tDivis�o = 3\n");
    printf("\t\tMultiplica��o = 4\n");
    printf("\n\nDigite o primeiro valor:");
    scanf("%d", &v1);
    printf("Digite o segundo valor:");
    scanf("%d", &v2);
    printf("Digite a opera��o desejada:");
    scanf("%d", &op);
    
        switch(op) {
        case 1:
        resultado = soma(&v1,&v2);
        break;
        case 2:
        resultado = subtracao(&v1,&v2);
        break;
        case 3:
        resultado = divisao(&v1,&v2);
        break;
        case 4:
        resultado = multiplicacao(&v1,&v2);
        break;
        default:
        printf("opera��o inv�lida");
        }
        printf("Resultado = %d\n", resultado);
    
    return 0;
}