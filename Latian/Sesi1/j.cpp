#include<stdio.h>

int main(){
	double A, B, result;
	scanf("%lf %lf", &A, &B);
//	printf("%lf %lf", A, B);

	result = B/A*100;
	
	printf("%.4lf%%\n", result);
}
