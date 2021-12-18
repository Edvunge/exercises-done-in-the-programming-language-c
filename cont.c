#include<stdio.h>
#include<stdlib.h>

int main (void){


int a,b,c;
int cont;

cont = 0;
printf(" digite o primeiro numero\n");
scanf("%d", &a);
printf("digite o segundo numero\n");
scanf("%d", &b);
printf("digite o terceiro numero\n");
scanf("%d", &c);

if (a >= b ||  a >= c) {
	printf( " o maior numero dentre os tres...\n " , a );
}

else {

if ( a <= b || c <= b )  printf (" o maior numero dentre os tres...\n " , b );
printf(" e o maior numero dentre os tres...\n " , c );
}
    
	
	
                  

	system("pause");
	return(0);

}
