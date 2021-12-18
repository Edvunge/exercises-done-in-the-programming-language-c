#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(void){
 int  h , R;
 float  PPI, K;

/* Seção de Comandos      
	* pretende-se determinar a superficie e o volume de um cone,
    * para tal, construa um projecto que leia a altura,
    * k e o raio da base,r e escreva os valores pretendidos
    * use pi = 3.1416

// K = pi.r².h
//K=:?
//PI=3.1416
//r=?
*/
 printf("qual o valor que podemos atribuir na altura do cone:?\n");
 scanf( "%i ", &h );
 printf("qual o valor podemos atribuir ao raio:?\n");
 scanf("%i", &R );
   PPI = (3.1416);
   K = (PPI*(R*R)*h);
    printf("o valor final da altura \n", K );

system("Pause");
return 0;	
}
 
