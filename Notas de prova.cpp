#include <stdio.h>

int N;

int main ()
{
	scanf("%i", &N);
	if (N <= 100 and N >= 86)
	{
		printf("A");
	}
	if (N <= 85 and N >= 61)
	{
		printf("B");
	}
	if (N <= 60 and N >= 36)
	{
		printf("C");
	}
	if (N <= 35 and N >= 1)
	{
		printf("D");
	}
	else if (N == 0)
	{
		printf("E");
	}
	return 0;
}
