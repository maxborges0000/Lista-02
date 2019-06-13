#include <stdio.h>

int b(int n1){

    int i = 0, j, vet[10];

    while(n1 >= 2){
        if (n1 % 2 == 0) {
            vet[i] = 0;
            n1 = n1 / 2;
        }
        else {
            vet[i] = 1;
            n1 = n1 / 2;
        }
            i++;
    }

    vet[i] = 1;
    int a = 0;
    char r[i+1];
    for(j = i; j >= 0; j--){
        vet[j];
        if(vet[j] == 1){
            r[a] = '1';
        }if(vet[j] == 0){
            r[a] = '0';
        }

        a++;
    }
return atoi(r);
}

int main()
{

int n1;
char resutado[10];
    printf("Digite um número:");
    scanf("%d",&n1);
    printf(" Valor em Binário: %d ", b(n1));
return 0;
}
