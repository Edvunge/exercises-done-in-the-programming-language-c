#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main (){
	
/* Função : 13- Elaborar um programa que efetue a leitura do nome e do sexo de uma pessoa,
              apresentando com saída uma das seguintes mensagens:
              "Ilmo Sr.", se o sexo informado como masculino,
              ou a mensagem "Ilma Sra.", para o sexo informado como feminino.
              Apresente também junto da mensagem de saudação o nome previamente informado.
 Data : 23/11/2017
*/ 
  int cont,nome ,sexo,nome2,noome; 
  //char sexo, m, noome;

cont = (0);
  /*
  printf(" qual o seu nome:? \n ");
  scanf("%d", &nome);*/
  
  printf(" qual o seu nome:? \n ");
  scanf("%d", &nome2);
  /*printf(" qual o seu sexo:?  ");
  scanf("%d", &noome);*/
            /*
			if ( sexo == m ){
			printf(" Ilmo Sr. " , nome);
            }else{
			printf(" Ilma Sra. " , nome);
            }
    		*/
    		printf(" qual o seu nome:? \n ");
  			scanf("%d", &nome);
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
