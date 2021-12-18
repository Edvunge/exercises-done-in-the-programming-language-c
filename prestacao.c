/* Função : 5-	Efetuar o cálculo e a apresentação do valor de uma prestação em atraso,
//               utilizando a fórmula  PRESTACAO ? VALOR + (VALOR * TAXA/100) * TEMPO).
// Data : 30/09/2017
*/ 
#include <stdio.h>
#include <stdlib.h>
int main (void){

int valor, tempo; 
double taxa, prestacao; 

// Seção de Comandos
printf(" insira um valor:\n");
scanf("%d", &valor);
printf("insira um valor para a taxa: \n");
scanf("%d", &taxa);
printf("insira um valor equivalente ao tempo: \n");
scanf("%d", &tempo);

prestacao = (valor + ( valor * (taxa)/100 ) * tempo);

printf("o valor da prestaçao e : %f \n " , prestacao);
system("pause");
return(0);
}
