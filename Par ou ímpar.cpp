#include <stdio.h>

int N, i, j, k=1, A, B;
char nome1[20], nome2[20];
int nomes[1000];

int main ()
{
	scanf("%i", &N);
	while (N != 0)
	{
		j=1;
		scanf("%s", &nome1);
		scanf("%s", &nome2);
		for (i=1; i<=N; i++)
		{
			scanf("%i", &A);
			scanf("%i", &B);
			if ((A+B) % 2 == 0)
			{
				nomes[j]=1;
				j++;
			}
			else
			{
				nomes[j]=2;
				j++;
			}
		}
		printf("\nTeste %i\n", k);
		k++;
		for (j=1; j<=N; j++)
		{
			if (nomes[j] == 1)
			{
				printf("%s\n", nome1);
			}
			else
			{
				printf("%s\n", nome2);
			}
		}
		printf("\n");
		scanf("%i", &N);
	}
	return 0;
}
