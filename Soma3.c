/* Função : -	Elaborar um programa que efetue a leitura de três valores (A, B e C) e
                apresente como resultado final à soma dos quadrados dos três valores lidos
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){

int soma, a, b, c;

// Seção de Comandos 
printf("digite o primeiro numero: \n");
scanf("%d", &a);
printf("digite o segundo numero: \n ");
scanf("%d", &b);
printf("digite o terceiro numero: \n");
scanf("%d", &c);

soma = ( (a*a) + (b*b) + (c*c) );
printf(" o resultado da soma %d \n" , soma);

system("pause");
return(0);
}
