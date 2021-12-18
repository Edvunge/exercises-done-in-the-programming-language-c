#include<stdio.h>
#include<stdlib.h>


main(){
/*  faca um programa que solicite um numero ao usuario,  
leia o numero do teclado,  
multiplique-o por 3 e exiba o resultado. */	
	
	int numero;
	
	printf(" digite um numero:? \n");
	scanf(" %d " ,& numero );
	
	printf(" o resultado final da operaçao foi:%d \a\n" , numero * 3 );
		
	system("PAUSE");
}
