#include <stdio.h>

void main(){
    int n;
    printf("Digite um valor:");
    scanf("%d", &n);
    if(n%2 == 0){
        printf("Par!\n");
    }else{
        printf("Impar!\n");
    }
    
    
    return 0;
}
