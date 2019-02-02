#include <stdio.h>
int f[1000];
int main(){
	int T, N, k, i;
	scanf("%d", &T);
	f[0]=0;
	f[1]=1;
	fib(1000);
	for(int i=0; i<T; i++){
	    k=0;
	    scanf("%d", &N);
	    while(N>0){
	        if(N==f[k]){
	            printf("%d", k);
	            break;
	        }
	        if(N>f[k] && N<f[k+1]){
	            printf("%d ", k);
	            N-=f[k];
	            k=0;
	            continue;
	        }
	        k++;
	    }
	    printf("\n");
	}
}
int fib(int N){
    for(int j=2; j<N; j++)
        f[j]=f[j-1]+f[j-2];
}