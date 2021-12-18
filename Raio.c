#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){

   int raio, comprimento, PPPI, areia;
   int volume;

   PPPI = (360);

   printf(" digite  um valor para o raio: \n\n ");
   scanf("%f" , &raio);
   
   comprimento = ( 2 * PPPI * raio );
   
   areia = ( PPPI * ( raio * raio ) );
   
   volume = ( (3/4) * PPPI * ( raio * raio * raio ) );
   
   printf(" o valor do comprimento e %d \n\n " , comprimento );
   printf(" o valor da areia e %d \n\n " , areia );
   printf(" o valor do volume e %d \n\n " , volume );


	system("pause");
	return 0;
}
