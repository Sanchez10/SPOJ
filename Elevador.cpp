#include <stdio.h>

int N, C, S, E, i, x=0, y=0;

int main ()
{
	scanf("%i", &N);
	scanf("%i", &C);
	for (i=0; i<N; i++)
	{
		scanf("%i", &S);
		scanf("%i", &E);
		x=x+(E-S);
		if (x>C)
		{
			y=y+1;
		}
	}
	if (y==0)
	{
		printf("N");
	}
	else
	{
		printf("S");
	}
	return 0;
}
