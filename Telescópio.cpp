#include <iostream>
using namespace std;

int i, x, abertura, estrelas, fotons, stars;

int main ()
{
	stars=0;
	cin >> abertura;
	cin >> estrelas;
	for (i=0; i<estrelas; i++)
	{
		cin >> fotons;
		x=fotons*abertura;
		if(x >= 40000000)
		{
			stars=stars+1;
		}
	}
	cout << stars;	
	return 0;
}
