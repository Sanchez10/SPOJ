#include <stdio.h>

int x, n=1, i, j=1, k;
int v[10000];
int w[10000];

int main ()
{
	//ENTRADAS
	scanf("%i", &n);
	while (n != 0)
	{
		for (i=1; i<=n; i++)
		{
			scanf("%i", &v[i]);
			if (v[i] == i)
			{
				w[j]=i;
				j=j+1;
				x=x+1;
			}
		}
		scanf("%i", &n);
	}
	
	//SAÍDAS
	for (j=1; j<=x; j++)
	{
		printf("\nTeste %i\n", j);
		printf("%i\n", w[j]);
	}
	
	return 0;
}
