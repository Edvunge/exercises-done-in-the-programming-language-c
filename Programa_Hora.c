#include <stdio.h>
#include <stdlib.h>

int main(void){

int hora, seg;
/* Seção de Comandos
um dia tem 24 horas.
a hora tem 60 minutos.
o minuto tem 60 segundos. */
printf(" digite uma hora qualquer: \n\n");
scanf("%d", &hora);
seg = ( 60 * hora);
printf(" esta referida hora \n " , seg ); 
// , " tem \n" , seg , " segundos\n");

system ("PAUSE");
return(0);
}
