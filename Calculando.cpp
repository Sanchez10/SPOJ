

int m, i, j, x, vetor[100];
char operador[100];


int main ()
{
	j=1;
	cin >> m;
	while(m != 0)
	{
		for(i=1; i<=m; i++)
		{
			cin >> vetor[i];
			if (i != m)
			{
				cin >> operador[i];
			}	
		}
		x=vetor[1];
		for(i=1; i<m; i++)
		{
			if (operador[i] == '+')
			{
				x=x+vetor[i+1];
			}
			else if (operador[i] == '-')
			{
				x=x-vetor[i+1];
			}	
		}
		cout << "\nTeste "<< j << "\n" << x << "\n\n";
		j++;
		cin >> m;	
	}
	return 0;
}
