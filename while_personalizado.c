#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int Funcao (int n, int v[]) { 
	int i, j; 
	i = 0; 
	while (i < n) { 
		if (v[i] != 0) 
			i = i + 1; 
		else { 
			for (j = i + 1; j < n; j++) 
				v[j-1] = v[j]; 
			n = n - 1; 
		
		} 
	} 
	return n; 

}
