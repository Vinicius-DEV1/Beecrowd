#include <stdio.h>
int main(){
	int par[5] = {-1, -1, -1, -1, -1};
	int impar[5] = {-1, -1, -1, -1, -1};
	int X;

	for(int i = 0; i < 15; i++){
		scanf("%d", &X);

		if( X % 2 == 0){
			for(int i = 0; i < 5; i++)
			{
				if(par[i] == -1)
				{
					if(i == 4)
					{
						par[i] = X;
						for(int i = 0; i < 5; i++)
						{
							printf("par[%d] = %d\n", i, par[i]);
							par[i] = -1;
						}
					}
					else
					{
						printf("debug: par add\n");
						par[i] = X;
						break;
					}				
				}
			}
		}
		else
		{
			for(int i = 0; i < 5; i++)
			{
				if(impar[i]== -1)
				{
					if(i==4)
					{
						impar[i] = X;
						for(int i=0; i<5; i++)
						{
							printf("impar[%d] = %d\n", i, impar[i]);
							impar[i] = -1;
						}
					}
					else
					{
						impar[i] = X;
						break;
					}
				}
			}
		}
	}
	printf("DEBUG: RESTANTES DOS VETORES\n");
	for(int i = 0; i < 5; i++)
	{
		if(impar[i]!= -1)
		{
			printf("impar[%d] = %d\n", i, impar[i]);
		}
		else
		{
			break;
		}
	}
	for(int i=0; i<5; i++)
	{
		if(par[i] != -1)
		{
			printf("par[%d] = %d\n", i, par[i]);
		}
		else
		{
			break;
		}
	}
}