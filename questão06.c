#include<stdio.h>

void main(){
	 int matriz[7][7]={0};
	  
	 matriz[0][3]=1;

	 for(int l=1; l<4; l++){
	 	 for(int c=1; c<7; c++){
	 	 	 matriz[l][c] = matriz[l-1][c-1] + matriz[l-1][c+1];
	 	     
	 	  }	 	 
	   } 
	 	for(int l=0; l<7; l++){
	 		for(int c=0; c<7; c++){
	 			printf("%d  ", matriz[l][c]);
	 		}
	 		printf("\n");
	 	}	
}
