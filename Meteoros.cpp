#include <stdio.h>

int x0, x1, x2, y0, y1, y2, N, i, met[10000], j=0, k; 

int main ()
{
	scanf("%i", &x1);
	scanf("%i", &y1);
	scanf("%i", &x2);
	scanf("%i", &y2);
	while (x1 != 0 and x2 != 0 and y1 != 0 and y2 != 0)
	{
		j++;
		scanf("%i", &N);
		for (i=1; i<=N; i++)
		{
			scanf("%i", &x0);
			scanf("%i", &y0);
			if ( x1 <= x0 and x0 <= x2 and y2 <= y0  and y0 <= y1)
			{
				met[j]=met[j]+1;
			}
		}
		scanf("%i", &x1);
		scanf("%i", &y1);
		scanf("%i", &x2);
		scanf("%i", &y2);
	}
	
	for(k=1; k<=j; k++)
	{
		printf("\nTeste %i\n", k);
		printf("%i\n", met[k]);	
	}
	return 0;
}
