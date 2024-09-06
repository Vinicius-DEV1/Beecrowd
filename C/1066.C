#include <stdio.h>
int main()
{
	int N, pares = 0, impares = 0, pos = 0, neg = 0;

	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &N);

		if( N % 2 == 0)
			pares++;
		else
			impares++;

		if(N>0)
			pos++;
		else if(N<0)	
			neg++;
	}
	printf("%d valor(es) par(es)\n", pares);
	printf("%d valor(es) impar(es)\n", impares);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);
}