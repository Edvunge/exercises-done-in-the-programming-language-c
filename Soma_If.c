#include <stdio.h>
#include <stdlib.h>

int main(void) {

int n1, n2, soma, cont;

printf("digite o primeiro numero:");
scanf("%d",&n1);
printf("digite o segundo numero:");
scanf("%d",&n2);

soma = (n1 + n2);

if(n1 >= n2) printf("o maior valor e %d",n1);
else printf("o maior valor e %d\a\n\n",n2);
printf(" \n\n ");
system ("pause");
return(0);
}

