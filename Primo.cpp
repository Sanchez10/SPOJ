#include <stdio.h>

int x, i, y=0;

int main ()
{
	scanf("%i", &x);
	if (x == 1 or x == 2)
	{
		printf("sim");
	}
	else
	{	
		for (i=2; i<x; i++)
		{
			if (x % i == 0)
			{
				y=y+1;
			}
		}
		if (y == 0)
		{
			printf("sim");
		}
		else 
		{
			printf("nao");
		}
	}
	return 0;
}
