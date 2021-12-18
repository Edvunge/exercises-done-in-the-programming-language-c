/*8-	Efetuar a leitura de três valores (variáveis A, B e C) e efetuar o cálculo da equação completa de segundo grau, 
apresentando as duas raízes, se para os valores informados for possível efetuar o referido cálculo. 
Lembre-se de que a variável A deve ser diferente de zero.*/ 
#include<stdio.h>
#include<stdlib.h>

int main (void){

int  a, b, c, d;
float  RaizDelta, delta, x1, x2; 
int  cont; 

cont = (0);
printf(" digite o primeiro numero: \n");
scanf("%d", &a);
printf(" digite o segundo numero: \n");
scanf("%d", &b);
printf(" digite o terceiro numero: \n");
scanf("%d", &c);
printf(a," x^2 +%d",b," x +%d",c," = 0%d\n");
d =(4);
RaizDelta = (delta*delta);
x1 = ( -b + RaizDelta)/(2)*(a);
x2 = (-b - RaizDelta)/(2)*(a);
delta = ((b)^(2)-((4)*(a)*(c)));
printf(" o valor que nos achamos do nosso delta e: \n\%d" , delta);
           if ( delta < 0 );{
           printf(" nao tem raiz exacta \n");
           }
               else( delta = 0 );{
                printf(" tem duas raizes iguais \n");
                
                           printf(" tem duas raizes \n");
                           printf(x1);
                           printf(x2);
system("pause");
return(0);
}
