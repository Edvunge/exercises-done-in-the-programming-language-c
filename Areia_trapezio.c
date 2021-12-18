#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main (void){


double areia_trapezio,base_maior,base_menor,altura;

printf(" qual a base maior do trapezio:? \a\n\n");
scanf("%f", &base_maior);
printf(" qual a base menor do trapezio:?\a\n\n ");
scanf("%f", &base_menor);
printf(" qual altura do trapezio:? \n\n");
scanf("%f", &altura);
areia_trapezio = (( (base_maior + base_menor) * altura) / 2);
printf(" A areia do trapezio e %f\n\n" , areia_trapezio);

printf("pause");
return(0);
}
