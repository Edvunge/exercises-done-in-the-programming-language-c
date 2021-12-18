#include <stdio.h>
#include <stdlib.h>

int main (void)
{

int idade = 22;
float dolar = 2.45;
double raio = 3.151617;
char sexo = 'M';

char nomeCompleto [50] ="edvaldo vunge";


printf("A idade e %d anos.\n\n", idade);

printf("O dolar esta cotado em %.2f dolares.\n\n",dolar);

printf("O raio do circulo e %lf centimetros.\n\n",raio);

printf("O sexo do candidato e %c.\n\n",sexo);

printf("O nome completoa do programador  %s que criou este pequeno Algoritmo.\n\n ",nomeCompleto);

printf("Tenho %i anos e US %.2f dolares.\n\n",idade, dolar);

system("PAUSE");
return(0);
}
