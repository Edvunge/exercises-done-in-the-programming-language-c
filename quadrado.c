#include <stdio.h>
#include <stdlib.h>

int main(void){

/*1-	Ler dois inteiros (vari�veis A e B) e imprimir 
o resultado do quadrado da diferen�a do primeiro valor pelo segundo.*/

int  resultado,a,b;

// Se��o de Comandos

printf("digite o primeiro numero:");
scanf("%d", &a);
printf("digite o segundo numero:");
scanf("%d", &b);
resultado = ( (a)*(a)  - (b)*(b) );
printf("o resultado obtido e %d \n" , resultado );

system("PAUSE");
return(0);
}
