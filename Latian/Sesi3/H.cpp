#include<stdio.h>

int main(){
	
	float a1,a2,a3;
	float b1,b2,b3;
	float c1,c2,c3;
	float d1,d2,d3;
	
	float res1,res2,res3;
	
	scanf("%f %f %f %f", &a1, &b1, &c1, &d1);
	scanf("%f %f %f %f", &a2, &b2, &c2, &d2);
	scanf("%f %f %f %f", &a3, &b3, &c3, &d3);
	
//	printf("%f %f %f %f\n", a1, b1, c1, d1);
//	printf("%f %f %f %f\n", a2, b2, c2, d2);
//	printf("%f %f %f %f\n", a3, b3, c3, d3);
	
	res1 = (2*a1/1) + (4*b1/2) + (6*c1/3) + (4*d1/4);
	res2 = (2*a2/1) + (4*b2/2) + (6*c2/3) + (4*d2/4);
	res3 = (2*a3/1) + (4*b3/2) + (6*c3/3) + (4*d3/4);
	
	printf("%.2f\n", res1);
	printf("%.2f\n", res2);
	printf("%.2f\n", res3);
}
