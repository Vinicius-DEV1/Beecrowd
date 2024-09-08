#include <stdio.h>
int main()
{
	int X, impares = 0;

	scanf("%d", &X);

	while(impares<6)
	{
		if(X%2!=0)
		{
			printf("%d\n",X);
			impares++;
		}
		X++;
	}
}