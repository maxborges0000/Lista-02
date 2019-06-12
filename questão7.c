#include <string.h>

void main(){
	char vetor [100];
	printf("Informe uma string:");
	//for(int i=0; i< 101; i++)
	fgtes(vetor,100,stdin);
	for(int i=0; i<strlen(vetor);i++){

	printf("%c",vetor [i]);
}

	for(int i=strlen(vetor)-1; i>=0; i--){
	printf("%c",vetor[i]);

}