#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {   

/* Ler tr�s notas de um aluno, calcular a m�dia e 
informar se ele foi aprovado (M�dia = 7), 
reprovado (M�dia < 7) ou aprovado com louvor (M�dia = 10)
  	   */
  	   

int  nota1, nota2, nota3, cont;
float  media;

cont = (0);
printf(" diz qual a nota da primeira prova:? \n\n");
scanf(" %d " , &nota1);
printf(" diz qual a nota da segunda prova:? \n\n");
scanf(" %d " , &nota2);
printf(" diz qual a nota da terceira prova:? \n\n");
scanf(" %d " , &nota3);
 media = (( nota1 + nota2 + nota3 ) / (3));
           
		   if ( media = 7 ){
           printf(" aluno  aprovado %f ");
           }else{
		   			if  (media < 7){
					  printf(" aluno reprovado %f ");
                      }else{
					  		if (media = 10){
                           printf(" aluno aprovado com louvor %f ");
						}
					}	
				}
printf("\n\n\n\n");
system("pause");
	return 0;
}
	
