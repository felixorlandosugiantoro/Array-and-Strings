#include<stdio.h>

int main(){
	
	long duit, harga;
	scanf("%ld %ld", &duit, &harga);
//	printf("%ld %ld", duit, harga);
	
	long result;
	result = duit/harga;
	printf("%ld\n", result);
}
