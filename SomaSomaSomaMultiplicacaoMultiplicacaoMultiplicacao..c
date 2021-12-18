/* Função : 6-	Ler quatro números inteiros e apresentar o resultado da adição e multiplicação,
//           baseando-se na utilização do conceito da propriedade distributiva.
//           Ou seja, se forem lidas as variáveis A, B, C, e D, devem ser somadas e multiplicadas A com B, A com C e A com D.
//           Depois B com C, B com D e por fim C com D.
//           Perceba que será necessário efetuar seis operações de adição e seis operações de multiplicação e apresentar doze resultados de saída
*/ 
#include <stdio.h>
#include <stdlib.h>
int main(void){

int a, b, c, d; 
int op1, op2, op3, op4, op5, op6; 
int op7, op8, op9, op10, op11, op12;

// Seção de Comandos 
printf("insira o primeiro numero: \n");
scanf("%d", &a);
printf("insira o segundo numero: \n");
scanf("%d", &b);
printf("insira o terceiro numero: \n");
scanf("%d", &c);
printf("insira o quarto numero: \n");
scanf("%d", &d);

op1 = (a+b);
op2 = (a+c);
op3 = (a+d);
op4 = (b+c);
op5 = (b+d);
op6 = (c+d);

op7 = (a*b);
op8 = (a*c);
op9 = (a*d);
op10 = (b*c);
op11 = (b*d);
op12 = (c*d);
printf(" a soma de a e b e igual: %d\n" , op1);
printf(" a soma de a e c e igual: %d\n" , op2);
printf(" a soma de a e d e igual: %d\n" , op3);
printf(" a soma de b e c e igual: %d\n" , op4);
printf(" a soma de b e d e igual: %d\n" , op5);
printf(" a soma de c e d e igual: %d\n" , op6);
printf("a multiplicacao de a e b e igual: %d\n" , op7);
printf("a multiplicacao de a e c e igual: %d\n" , op8);
printf("a multiplicacao de a e d e igual: %d\n" , op9);
printf("a multiplicacao de b e c e igual: %d\n" , op10);
printf("a multiplicacao de b e d e igual: %d\n" , op11);
printf("a multiplicacao de c e d e igual: %d\n" , op12);

system("pause");
return(0);
}
