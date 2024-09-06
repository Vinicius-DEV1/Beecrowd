#include <stdio.h>
int main(){
	float n;
	int positivo=0;

	for(int i=0; i<6; i++)
	{
		scanf("%f", &n);
		if(n>0)
		{
			positivo++;
		}
	}
	printf("%d valores positivos\n", positivo);
}