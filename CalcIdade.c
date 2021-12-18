#include <stdio.h>
#include <stdlib.h>

/* 
crie um Algoritmo que diz qual a minha idade actual.
*/

int main(void){

int idade, ano_actual, ano_nascimento;
//int anoActual;
//int anoNascimento;

printf("em que ano nos estamos?\n");
scanf("%d", & ano_actual);

printf("em que ano vc nasceu?\n");
scanf("%d", & ano_nascimento);

idade = (ano_actual - ano_nascimento);
printf("A sua Idade Actual: %d anos\a\n\n", idade);


system ("pause");
return(0);
}

