#include <stdio.h>
#include <stdlib.h>

int main (void){

int selecao;

printf("o que vc deseja fazer? \n\n");

printf("1 - usar a calculadora \n");
printf("2 - abrir o bloco de notas \n");
printf("3 - usar o opera\n\n");	

scanf("%d", &selecao);

switch(selecao)
{
case 1:
	system("calc.exe");
	break;
case 2:
	system("notepad.exe");
	break;
case 3:
	system("opera.exe");
	break;
defaulf:
	printf("\n nenhuma escolha foi feita.");
	break;
}

printf("\n\n");
system("pause");
return(0);	
}
