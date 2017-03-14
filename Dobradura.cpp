#include <stdio.h>

int n, j, z, J, Z, teste = 0, potDois = 1, valor[16];

int main()
{
 	for (int i = 0; i < 16; i++)
 	{
		int v = potDois + 1;
  		valor[i] = v*v;
  		potDois *= 2;
 	}
 	while (1)
 	{
  		scanf("%d", &n);
  		if (n == -1) break;
  		printf("Teste %d\n%d\n\n", ++teste, valor[n]);
 	}
return 0;
}
