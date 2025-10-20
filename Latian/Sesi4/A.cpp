#include<stdio.h>

int main(){
	
	int A;
	scanf("%d", &A);
//	printf("%d", A);
	
	//GENAP -> Kelipatan 2 (habis dibagi 2)
	//GANJIL -> Ga habis dibagi 2
	
	//CARA 1 NYIMPEN VARIABEL
//	int sisa;
//	sisa = A % 2;
//	
//	if(sisa == 1){
//		printf("ODD\n");
//	}else{
//		printf("EVEN\n");
//	}
	
	if(A % 2 == 0){
		printf("EVEN\n");
	}else{
		printf("ODD\n");
	}
	
}
