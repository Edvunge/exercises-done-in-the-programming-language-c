
#include<stdio.h>
#include<stdlib.h>

int main (void){
/* A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. 
Considerando para este problema que p = 3.14159:
- Efetue o c�lculo da �rea, 
elevando o valor de raio ao quadrado e multiplicando por p. Entrada

A entrada 
cont�m um valor de ponto flutuante (dupla precis�o), no caso, a vari�vel raio.

Sa�da
Apresentar a mensagem "A=" seguido pelo valor da vari�vel area, 
conforme exemplo abaixo, com 4 casas ap�s o ponto decimal. 
Utilize vari�veis de dupla precis�o (double). Como todos os problemas, 
n�o esque�a de imprimir o fim de linha ap�s o resultado, 
caso contr�rio, voc� receber� "Presentation Error". */

int area, raio;

	
	float R =  3.14159;
	
	printf("insira um valor para o raio.\n");
	scanf("%d" ,&raio );
	
	area = R * ( raio * raio );
	printf("o valor  do raio :%d \n \n ",raio);
	printf("o valor  do pi  :%.5f \n \n ",R);
	
	printf(" o valor do raio e A= %i.5664f\n\n\n",area);
system("PAUSE");
return(0);
}
