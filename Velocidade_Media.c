/* Fun��o: 4 - Efetuar o c�lculo da quantidade de litros de combust�vel gasta  em uma viagem, utilizando um autom�vel que faz 12 Km por litro.
//        Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto (TEMPO) e a velocidade m�dia (VELOCIDADE) durante a viagem.
//        Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA ? TEMPO * VELOCIDADE. Possuindo o valor da dist�ncia,
//        basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula LITROS_USADOS ?
//        DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade m�dia (VELOCIDADE),
//        tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a quantidade de litros (LITROS_USADOS) utilizada na viagem.
*/ 
#include <stdio.h> 
#include <stdlib.h>

int main(void){

int TempoGasto; 
double VelocidadeMedia, Distancia, LitrosUsados; 

// Se��o de Comandos 
printf("digite o valor do tempo gasto:\n");
scanf("%d", &TempoGasto);
printf("digite o valor da velocidade media:\n");
scanf("%f", &VelocidadeMedia);

Distancia = ( TempoGasto * VelocidadeMedia );
LitrosUsados = ( Distancia ) / 12;

printf(" a Velocidade Media otida pelo automovel e de: %d\n" , VelocidadeMedia);
printf(" o Tempo Gasto durante a viagem e de: %d\n" , TempoGasto);
printf(" a distancia percorrida pelo automovel e: %d\n " , Distancia);
printf(" os Litros Usados durante a viagem sao de: %d\n " , LitrosUsados);

system("pause");
return(0);
}
