#include <stdio.h>
int main()
{
	int X, Y, soma = 0;

	scanf("%d %d", &X, &Y);
	
	if(X<Y)
	{
		X++;
		for(X; X < Y; X++)
		{
			if(X%2 != 0)
				soma+=X;
		}
	}
	else if(X>Y)
	{
		X--;
		for(X; X > Y; X--)
		{
			if( X%2 != 0)
				soma += X;
			}
		}
	printf("%d\n", soma);
}