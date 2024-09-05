#include <stdio.h>
int main(){
	int T;
	int N[1000];
	int i=0;

	scanf("%d", &T);

	while( i < 1000 )
	{	
		for(int j = 0; j < T; j++)
		{
			if(i>=1000)
				break;
			
			N[i] = j;
			printf("N[%d] = %d\n", i, N[i]);
			i++;
		}
	}
}