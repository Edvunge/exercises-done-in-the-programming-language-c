#include <stdio.h>
#include <stdlib.h>

#define DOLAR 2.49


int main(void){

float real;
float conversao;

printf("qual o valor em R$ (real)\?\n");
scanf("%f",&real);

conversao = real * DOLAR;

printf("\nValor em dolares: %.2f\n\n",conversao);

system("PAUSE");
return(0);	
}
