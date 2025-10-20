#include<stdio.h>

int main(){
	
	int testcase;
	scanf("%d", &testcase);
	
	for(int i=0; i<testcase; i++){
		long K,N,M;
		scanf("%ld %ld %ld", &K, &N, &M);
		
		printf("case #%d: ", i+1);
		
		if(N+M >= K){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
}
