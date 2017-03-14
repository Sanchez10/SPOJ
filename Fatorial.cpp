#include <stdio.h> 

int x, y, fac, fat;

int fatorial (int x)
{
	y=x;
	fat=1;
	if (x==0)
	{
		return 1;
	}
	else
	{
		while(y>1)
		{
			fat=fat*y;
			y=y-1;
		}
		return fat;	
	}
	
}

int main ()
{
	scanf("%i",&x);
	fac=fatorial(x);
	printf("%i", fac);
	return 0;
}
