#include <stdio.h>

int N, i, x, j, k=1, y, J, Z, m, a=1;
int A[1000][1000];
int B[1000];

int main ()
{
	//ENTRADA
	scanf("%i", &N);
	while (N != 0)
	{
		y=0;
		B[a]=N;
		a=a+1;
		for (i=1; i<=N; i++)
		{
			scanf("%i", &J);
			scanf("%i", &Z);
			x=J-Z;
			y=y+x;
			A[k][i]=y;
		}
		k=k+1;
		scanf("%i", &N);
	}
	
	//SAÍDA
	a=1;
	for (j=1; j<k; j++)
	{
		printf("\nTeste %i\n", j);
		for (m=1; m<=B[a]; m++)
		{
			printf("%d\n", A[j][m]);
		}
		a=a+1;
	}
	return 0;
}
