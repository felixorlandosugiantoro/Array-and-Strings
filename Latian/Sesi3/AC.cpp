#include<stdio.h>
#include<math.h>

int main(){
	
	int lawan;
	scanf("%d", &lawan);
//	printf("%d\n", lawan);
	
	long long kemungkinan;
	
	kemungkinan = pow(2,lawan);
	
	printf("%lld\n", kemungkinan-1);
	
}
