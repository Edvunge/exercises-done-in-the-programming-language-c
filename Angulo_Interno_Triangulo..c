#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
	
   	int soma_angulos, angulo_alfa, angulo_beta, angulo_gama;

	soma_angulos = (180);

    printf(" digite o valor do primeiro angulo: \n\n");
    scanf("%d" , &angulo_alfa);
    printf(" digite o valor do segundo angulo: \n\n");
    scanf("%d" , &angulo_beta);
    angulo_gama = (  soma_angulos - ( angulo_alfa + angulo_beta )  );

     printf(" o valor do primeiro angulo e %d \n\n" , angulo_alfa);
     printf(" o valor do segundo angulo e %d \n\n" , angulo_beta);
     printf(" o valor encotrado para o terceiro angulo e %d \n\n" , angulo_gama );
     printf(" o valor dos angulos internos de um trinagulo e %d \n\n" , soma_angulos );
     
	system("pause");
	return 0;
}
