
#include<stdio.h>
#include<stdlib.h>

int main (void){
/* A fórmula para calcular a área de uma circunferência é: area = p . raio2. 
Considerando para este problema que p = 3.14159:
- Efetue o cálculo da área, 
elevando o valor de raio ao quadrado e multiplicando por p. Entrada

A entrada 
contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída
Apresentar a mensagem "A=" seguido pelo valor da variável area, 
conforme exemplo abaixo, com 4 casas após o ponto decimal. 
Utilize variáveis de dupla precisão (double). Como todos os problemas, 
não esqueça de imprimir o fim de linha após o resultado, 
caso contrário, você receberá "Presentation Error". */

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
