#include <stdio.h>
 
int main() {
    int T;
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
            scanf("%d", &T);
            
            int fib[T+1];
            
            if(T == 0)
            {
                printf("Fib(0) = 0\n");
            }
            else if(T == 1)
            {
                printf("Fib(1) = 1\n");
            }
            else
            {
                fib[0] = 0;
                fib[1] = 1;
                
                for(int j = 2; j <= T; j++)
                {
                    fib[j] = fib[j-2] + fib[j-1];
                }

                printf("Fib(%d) = %d\n",T, fib[T]);
            }
    }
    
    return 0;
}