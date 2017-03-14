#include <stdio.h>

int N, resultado;

int quadrado(int N)
{
	int resultado;
	resultado = N*N;
	return resultado;	
}

int main ()
{
	scanf("%i", &N);
	resultado = quadrado(N);
	printf("%i", resultado);
	return 0;
}
