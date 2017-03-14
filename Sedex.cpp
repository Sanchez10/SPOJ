#include <stdio.h>

int N, a, l, p;

int main ()
{
	scanf("%i", &N);
	scanf("%i", &a);
	scanf("%i", &l);
	scanf("%i", &p);
	if (N>a or N>l or N>p)
	{
		printf("N");
	}
	else if (N<=a or N<=l or N<=p)
	{
		printf("S");
	}
	return 0;
}
