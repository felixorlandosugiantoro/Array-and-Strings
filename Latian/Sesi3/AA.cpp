#include<stdio.h>

int main(){
	
	float T, UT, UA, FS;
	scanf("%f %f %f", &T, &UT, &UA);
//	printf("%f %f %f", T, UT, UA);
	
	FS = (0.2 * T) + (0.3 * UT) + (0.5 * UA);
	
	printf("%.2f\n", FS);
}
