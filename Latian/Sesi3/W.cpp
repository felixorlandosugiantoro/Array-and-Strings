#include<stdio.h>

int main(){
	
	int a1,a2,a3;
	int mid1,mid2,mid3;
	
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);
	
//	printf("%d\n", a1);
//	printf("%d\n", a2);
//	printf("%d\n", a3);

	mid1 = (a1/10) % 10;
	mid2 = (a2/10) % 10;
	mid3 = (a3/10) % 10;
	
	printf("%d\n", mid1);
	printf("%d\n", mid2);
	printf("%d\n", mid3);
}
