#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(void){
	
	char string[100];
	printf ("Digite uma string: ");
	gets (string);
	printf ("\n\nVoce digitou %s\a\n\n",string);

	system("pause");
	return(0);
}
