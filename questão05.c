#include <stdio.h>
int main() 
{
  int m[9][9],i, j;;
   for(int i = 1; i < 10; i++ ){
       for(int j = 1; j < 10; j++ ){
        m[i][j] = i * j;  
       }        
   }
    for(int i = 1; i < 10; i++ ){
       for(int j = 1; j < 10; j++ ){
        printf("%d x %d = %d \n", i, j, m[i][j]);
        }
           printf("\n");
    }
  return 0;
}