#include<stdio.h>

int main(){
	
	long long A,B, res1,res2,res3,res4,res5;
	
	scanf("%ld %ld", &A, &B);
//	printf("%ld %ld\n", A, B);
	
	res1 = A+B;
	res2 = A-B;
	res3 = A*B;
	res4 = A/B;
	res5 = A%B;
	
	printf("%ld\n", res1);
	printf("%ld\n", res2);
	printf("%ld\n", res3);
	printf("%ld\n", res4);
	printf("%ld\n", res5);
}
