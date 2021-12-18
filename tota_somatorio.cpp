#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
	
// 14-	Elaborar um programa que efetue a leitura de 10 valores numéricos e apresente no final o total do somatório e a média aritmética dos valores lidos

   int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
   int total_somatorio;
   int media_aritmetrica;

    printf("insira o primeiro numero:? \n\n");
    scanf(" %d " , &n1);
    printf("insira o segundo numero:?\n\n");
    scanf(" %d " , &n2);
    printf("insira o terceiro numero:?\n\n");
    scanf(" %d " , &n3);
    printf("insira o quarto numero:?\n\n");
    scanf(" %d " , &n4);
    printf("insira o quinto numero:?\n\n");
    scanf(" %d " , &n5);
    printf("insira o sexto numero:?\n\n");
    scanf(" %d " , &n6);
    printf("insira o setimo numero:?\n\n");
    scanf(" %d " , &n7);
    printf("insira o oitavo numero:?\n\n");
    scanf(" %d " , &n8);
    printf("insira o nono numero:?\n\n");
    scanf(" %d " , &n9);
    printf("insira o decimo numero:?%d \n\n");
    scanf(" %d " , &n10);

    // 14-	Elaborar um programa que efetue a leitura de 10 valores numéricos e apresente no final o total do somatório e a média aritmética dos valores lidos

    total_somatorio = ( n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 );
    media_aritmetrica = ( (total_somatorio) / 10 );

    printf(" o valor total do somatorio e \n \n  " , total_somatorio);
    printf(" o valor da media aritmetrica \n \n  " , media_aritmetrica);
	printf(" \n \n \n \n ");

	system("pause");
	return(0);
}
