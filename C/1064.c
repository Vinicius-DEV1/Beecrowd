#include <stdio.h>
int main()
{
	float n;
	int positivo = 0;
	float media = 0.0;

	for(int i = 0; i < 6; i++){
		scanf("%f", &n);

		if(n>0){
			media += n;
			positivo++;
		}
	}
	media /= positivo;
	printf("%d valores positivos\n", positivo);
	printf("%.1f\n", media);
}