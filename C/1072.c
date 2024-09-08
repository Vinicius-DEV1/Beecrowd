#include <stdio.h>
int main()
{
	int N,X;
	int II=10, IF=20;
	int in=0, out=0;

	scanf("%d", &N);

	for(int i=0; i<N; i++)
	{
		scanf("%d", &X);
		if(X>=II && X<=IF)
			in++;
		else
			out++;
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
}