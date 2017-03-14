#include <stdio.h>

int N, M, i, j, w, x[1000][1000], y, z=0;

int main ()
{
	scanf("%i", &N);
	scanf("%i", &M);
	for(i=0; i<N; i++)
	{
		y=0;
		for(j=0; j<M; j++)
		{
			scanf("%i", &x[i][j]);
			y=y+x[i][j];
		}
		if (y>z)
		{
			z=y;
		}
	}
	for(i=0; i<M; i++)
	{
		w=0;
		for(j=0; j<N; j++)
		{
			w=w+x[j][i];
		}
		if (w>z)
		{
			z=w;
		}
	}
	printf("%i", z);
	return 0;
}
