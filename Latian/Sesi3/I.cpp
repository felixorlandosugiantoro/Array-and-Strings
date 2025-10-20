#include<stdio.h>

int main(){
	long A,total,subs;
	scanf("%ld", &A);
//	printf("%ld", A);
	
	total = A+A;
	subs = total-1;
	printf("%ld plus %ld is %ld\n", A, A, total);
	printf("minus one is %d\n", subs);
}
