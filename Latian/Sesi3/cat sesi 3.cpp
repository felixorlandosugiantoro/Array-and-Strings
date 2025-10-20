#include<stdio.h>

int main(){
	
	//IF STATEMENT
	/*
	if({ketentuan}){
		{yang mau dilakuin}
	}
	
	OR "||"
	Artinya "atau" berarti minimal benar satu
	
	AND "&&"
	Artinya "dan" berarti harus benar semua
	*/
	
	int a = 1;
	int b = 2;
	int c = 3;
	
//	if(a > b && (b < a || c == 3)){
//	printf("A lebih kecil dari pada B\n");
//	}

//	if(a<b){
//		printf("a lebih kecil dari b\n");
//	}
//	
//	if(a<b){
//		printf("a lebih besar dari b\n");		
//	}
	
	
	int nilai = 85;
	
//	if(nilai > 90){
//		printf("A");
//	}
//	else if(nilai > 80){
//		printf("B");
//	}
//	else if(nilai > 70){
//		printf("C");
//	}
//	else if(nilai > 60){
//		printf("D");
//	}
//	else{
//		printf("E");
//	}
	
//	nilai = 90;
//	if(nilai > 90){
//		printf("A");
//	}
//	if(nilai > 80){
//		printf("B");
//	}
//	if(nilai > 70){
//		printf("C");
//	}
//	if(nilai > 60){
//		printf("D");
//	}
//	else{
//		printf("E");
//	}
	
	nilai = 85;

	if(nilai >=91){
		printf("Grade : A.\n");
		char nama[100];
		scanf("%s", &nama);
		printf("kerja bagus %s!\n", nama);
		
	}
	else if(nilai >=81){
		printf("Grade : B.\n");
	}
	else if(nilai >=71){
		printf("Grade : C.\n");
	}
	else if(nilai >=61){
		printf("Grade : D.\n");
	} else{
		printf("You Failed.\n");
	}
	
//	printf("halo\n");
}
