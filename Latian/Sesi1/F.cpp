#include<stdio.h>

int main(){
	
	long num1,num2,num3,num4,num5,num6;
	long res1,res2,res3;
	
	scanf("%ld + %ld =",&num1, &num2);
	scanf("%ld + %ld =",&num3, &num4);
	scanf("%ld + %ld =",&num5, &num6);
	
//	printf("%ld %ld\n",num1, num2);
//	printf("%ld %ld\n",num3, num4);
//	printf("%ld %ld\n",num5, num6);
	
	res1 = num1 + num2;
	res2 = num3 + num4;
	res3 = num5 + num6;
	
	printf("%ld\n",res1);
	printf("%ld\n",res2);
	printf("%ld\n",res3);


}
