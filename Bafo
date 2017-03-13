#include <stdio.h>

int R, i, j, k=1;
int A[1000];
int B[1000];
int G[1000];

int main ()
{
	//ENTRADA
	scanf("%i", &R);
	while (R != 0)
	{
		int x=0, y=0;
		for (i=1; i<=R; i++)
		{
			scanf("%i", &A[i]);
			scanf("%i", &B[i]);
			x=x+A[i];
			y=y+B[i];
		}
		if (x > y)
		{
			G[k]=0;
			k=k+1;
		}
		else
		{
			G[k]=1;
			k=k+1;
		}
		scanf("%i", &R);
	}
	
	//SAIDA
	for (j=1; j<k; j++)
	{
		printf("\nTeste %i\n", j);
		if (G[j] == 0)
		{
			printf("Aldo\n");
		}
		else if (G[j] == 1)
		{
			printf("Beto\n");
		}
	}
	return 0;
}
