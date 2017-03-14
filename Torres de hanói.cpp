#include <stdio.h>
#include <math.h>

int N, i=0, j, v[30];

int main ()
{
	scanf("%i", &N);
	while (N != 0)
	{
		i++;
		v[i]=pow(2,N)-1;
		scanf("%i", &N);
	}
	for (j=1; j<=i; j++)
	{
		printf("\nTeste %i\n", j);
		printf("%i\n", v[j]);
	}
	
	return 0;
}
