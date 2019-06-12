#include <stdio.h>
void main(){
int dia, mes, ano, diaav, mesav, anoav, a, dm, d,a1;
            dia = 30;
            mes = 05;
            ano = 2019;
            printf("Digite o Dia do seu aniversario: ");
            scanf("%d", &diaav);
            printf("Digite o mês do seu aniversario (Um unico digito): ");
            scanf("%d", &mesav);
            printf("Digite o ano do seu aniversario: ");
            scanf("%d", &anoav);
            a1=ano - anoav;
            a=((a1-2)*365);
            int nasc, atual;
            if (mesav==2){
                d=31+(diaav-1);
            }
            if (mesav==3){
                d=59+(diaav-1);
            }
            if (mesav==4){
                d=90+(diaav-1);
            }
            if (mesav==5){
                d=120+(diaav-1);
            }
            if (mesav==6){
                d=151+(diaav-1);
            }
            if (mesav==7){
                d=181+(diaav-1);
            }
            if (mesav==8){
                d=212+(diaav-1);
            }
            if (mesav==9){
                d=242+(diaav-1);
            }
            if (mesav==10){
                d=273+(diaav-1);
            }
            if (mesav==11){
                d=303+(diaav-1);
            }
            if (mesav==12){
                d=334+(diaav-1);
            }  
                    
                
            
            int fil,p;
            fil = a + d;
            printf("VocÊ viveu %d dias ate hoje. \n",fil);
            scanf("%d",&p);
}