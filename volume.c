#include <stdio.h>
#include <stdlib.h>

int main (void){

float  volume,comprimento,largura,altura;

// Seção de Comandos

printf("qual o valor do comprimento: ");
scanf("%f", & comprimento);
printf("qual o valor da largura: ");
scanf("%f" , & largura);
printf("qual o valor da altura: ");
scanf("%f" , & altura);

volume = (comprimento * largura * altura);
printf("o valor do volume e %f \n " , volume);

system("pause");
return(0);
}
