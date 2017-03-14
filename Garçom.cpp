#include <stdio.h>

int N, L, C, i, x=0;

int main ()
{
	scanf("%i", &N);
	for (i=0; i<N; i++)
	{
		scanf("%i", &L);
		scanf("%i", &C);
		if (L > C)
		{
			x=x+C;
		}
	}
	printf("%i", x);
	return 0;
}
