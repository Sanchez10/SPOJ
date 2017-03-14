#include <stdio.h>

int N, T, V, i, x, y;

int main ()
{
	scanf("%i", &N);
	for (i=0; i<N; i++)
	{
		scanf("%i", &T);
		scanf("%i", &V);
		x=T*V;
		y=y+x;
	}
	printf("%i", y);
	return 0;
}
