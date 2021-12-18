#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main (void){
	
int ano_nasc,ano_actual,idade; 

printf("em que ano nos encontramos ? \a\n\n");
scanf("%d", &ano_actual);
printf(" em que ano nasceste? \a\n\n");
scanf("%d", & ano_nasc);
idade = ( ano_actual - ano_nasc );
printf("A sua idade em 2025 sera %d \n \n \n \n \n \n " , idade);
	
	printf("pause");
	return(0);
}
