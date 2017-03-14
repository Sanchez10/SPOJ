#include <stdio.h>

int L, D, K, P, x, res;

int main ()
{
	scanf("%i", &L);
	scanf("%i", &D);
	scanf("%i", &K);
	scanf("%i", &P);
	x=L/D;
	res=(K*L)+x*P;
	printf("%i", res);
	return 0;
}
