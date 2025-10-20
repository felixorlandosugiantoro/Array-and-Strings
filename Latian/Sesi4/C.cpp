#include<stdio.h>

int main(){
	
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		int A,B;
		scanf("%d %d", &A, &B);
//		printf("%d %d", A, B);
		
		printf("Case #%d: ", i);
		
		if(A>B){
			printf("Go-jo\n");
		}else{
			printf("Bi-Pay\n");
		}
		
	}
}
