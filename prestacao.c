/* Fun��o : 5-	Efetuar o c�lculo e a apresenta��o do valor de uma presta��o em atraso,
//               utilizando a f�rmula  PRESTACAO ? VALOR + (VALOR * TAXA/100) * TEMPO).
// Data : 30/09/2017
*/ 
#include <stdio.h>
#include <stdlib.h>
int main (void){

int valor, tempo; 
double taxa, prestacao; 

// Se��o de Comandos
printf(" insira um valor:\n");
scanf("%d", &valor);
printf("insira um valor para a taxa: \n");
scanf("%d", &taxa);
printf("insira um valor equivalente ao tempo: \n");
scanf("%d", &tempo);

prestacao = (valor + ( valor * (taxa)/100 ) * tempo);

printf("o valor da presta�ao e : %f \n " , prestacao);
system("pause");
return(0);
}
