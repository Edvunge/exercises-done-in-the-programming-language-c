#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){

char nome [65];

printf("digite seu nome: ");
fgets(nome,64,stdin);

printf("\nNome digitado: %S.\n\n", nome);


system ("pause");
return(0);
}

