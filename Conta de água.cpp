#include <stdio.h>

int N, x=7;

int main ()
{
	scanf("%i", &N);
	if (N >= 11 and N <= 30)
	{
		x=x+(N-10);
	}
	else if (N >= 31 and N <= 100)
	{
		x=x+20+(N-30)*2;
	}
	else if (N >= 101)
	{
		x=x+160+(N-100)*5;
	}
	printf("%i", x);
	return 0;
}
