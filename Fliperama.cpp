#include <stdio.h>

int N, M, i, j, y;
int pontos[10000], ranking[500];

int main ()
{
	scanf("%i", &N);
	scanf("%i", &M);
	for (i=0; i<N; i++)
	{
		scanf("%i", &pontos[i]);
	}
	for (i=0; i<N; i++)
	{
		for (j=i+1; j<N; j++)
		{
			if (pontos[i]<pontos[j])
			{
				y=pontos[i];
				pontos[i]=pontos[j];
				pontos[j]=y;
			}
		}
	}
	printf("\n");
	for (i=0; i<M; i++)
	{
		printf("%i\n", pontos[i]);
	}	
	return 0;
}
