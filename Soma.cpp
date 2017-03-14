#include <stdio.h>

int N, soma, x;

int main()
{
	soma = 0;
	scanf("%i",&N);

		while (N>0)
		{
			scanf("%i",&x);
			soma=soma+x;
			N=N-1;
		}
	printf("%i", soma);
	return 0;
}
