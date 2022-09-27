#include <stdio.h>

int somatorio ( int n)
{	
	
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (n*n + somatorio(n-1));
	}
			
}

int main()
{
	int n, soma;
	printf("Digite um Numero: ");
	scanf("%d", &n);
	soma = somatorio(n);
	printf("Resultado SOMATORIO : %d", soma);
	
}