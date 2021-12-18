#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
// Função : 14- Elaborar um programa que efetue a leitura de 10 valores numéricos e apresente no final o total do somatório e a média aritmética dos valores lidos.
// Autor :
// Data : 23/11/2017
// Seção de Declarações 
   
   int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
   float media_aritmetica;
   int somatorio;

   printf(" insira um numero: ");
   scanf("%d",&n1);
   printf(" o segundo numero e ");
   scanf("%d",&n2);
   printf(" o terceiro numero e ");
   scanf("%d",&n3);
   printf(" o quarto numero e ");
   scanf("%d",&n4);
   printf(" o quinto numero e ");
   scanf("%d",&n5);
   printf(" o sexto numero e ");
   scanf("%d",&n6);
   printf(" o setimo numero e ");
   scanf("%d",&n7);
   printf(" o oitavo numero e ");
   scanf("%d",&n8);
   printf(" o nono numero e ");
   scanf("%d",&n9);
   printf(" o decimo numero e ");
   scanf("%d",&n10);

   somatorio = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10);
   media_aritmetica = ( n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 )/(10);

   printf(" o primeiro numero e " , n1);
   printf("\n\n");
   printf(" o segundo numero e " , n2);
   printf("\n\n");
   printf(" o terceiro numero e " , n3);
   printf("\n\n");
   printf(" o quarto numero e " , n4);
   printf("\n\n");
   printf(" o quinto numero e " , n5);
   printf("\n\n");
   printf(" o sexto numero e " , n6);
   printf("\n\n");
   printf(" o setimo numero e " , n7);
   printf("\n\n");
   printf(" o oitavo numero e " , n8);
   printf("\n\n");
   printf(" o nono numero e " , n9);
   printf("\n\n");
   printf(" o decimo numero e " , n10);
   printf("\n\n");
   printf("");
   printf("");
   printf(" o somatorio e " , somatorio);
   printf(" a media aritmetica e " , media_aritmetica);

	system("pause");
	return 0;
}
