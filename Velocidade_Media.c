/* Função: 4 - Efetuar o cálculo da quantidade de litros de combustível gasta  em uma viagem, utilizando um automóvel que faz 12 Km por litro.
//        Para obter o cálculo, o usuário deve fornecer o tempo gasto (TEMPO) e a velocidade média (VELOCIDADE) durante a viagem.
//        Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA ? TEMPO * VELOCIDADE. Possuindo o valor da distância,
//        basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula LITROS_USADOS ?
//        DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade média (VELOCIDADE),
//        tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a quantidade de litros (LITROS_USADOS) utilizada na viagem.
*/ 
#include <stdio.h> 
#include <stdlib.h>

int main(void){

int TempoGasto; 
double VelocidadeMedia, Distancia, LitrosUsados; 

// Seção de Comandos 
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
