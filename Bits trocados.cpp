#include <stdio.h>
#include <iostream>

int x, y=1, z;
int v[10000];

int main ()
{
	//ENTRADAS
	for (x=1; x<10000; x++)
	{
		scanf("%i", &v[x]);
		if (v[x] == 0)
		{
			break;
		}
	y=y+1;
	}
	
	//SAÍDAS
	for (z=1; z<y; z++)
	{
		int i=0, j=0, k=0, l=0;
		while (v[z]>0)
		{
			if (v[z]>=50)
			{
				v[z]=v[z]-50;
				i=i+1;
			}
			else if (v[z]>=10)
			{
				v[z]=v[z]-10;
				j=j+1;
			}
			else if (v[z]>=5)
			{
				v[z]=v[z]-5;
				k=k+1;
			}
			else if (v[z]>=1)
			{
				v[z]=v[z]-1;
				l=l+1;
			}
		}
		printf("\nTeste %i", z);
		printf("\n%i ", i);
		printf("%i ", j);
		printf("%i ", k);
		printf("%i \n", l);
	}
	return 0;
}
