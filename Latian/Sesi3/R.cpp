#include<stdio.h>

int main(){
	
	long long a1,a2,a3;
	long long b1,b2,b3;
	long long c1,c2,c3;
	long long d1,d2,d3;
	
	long long res1,res2,res3;
	
	scanf("(%lld+%lld)x(%lld-%lld)", &a1, &b1, &c1, &d1); getchar();
	scanf("(%lld+%lld)x(%lld-%lld)", &a2, &b2, &c2, &d2); getchar();
	scanf("(%lld+%lld)x(%lld-%lld)", &a3, &b3, &c3, &d3); getchar();
	
//	printf("%lld %lld %lld %lld\n", a1, b1, c1, d1);
//	printf("%lld %lld %lld %lld\n", a2, b2, c2, d2);
//	printf("%lld %lld %lld %lld\n", a3, b3, c3, d3);
	
	res1 = (a1+b1)*(c1-d1);
	res2 = (a2+b2)*(c2-d2);
	res3 = (a3+b3)*(c3-d3);
	
	printf("%lld %lld %lld\n", res1, res2, res3);
}
