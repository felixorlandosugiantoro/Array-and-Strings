#include<stdio.h>

int main(){
	
	long long angka[501];
	
	int test;
	scanf("%d", &test);
	
	for(int k=1; k<=test; k++){
		
		int anak;
		int n; //total permen yang mau discan;
		scanf("%d %d", &anak, &n);
		
		long long totalBerat = 0;
		for(int j=0; j<anak; j++){
			
			//scan dari array angka
			for(int i=0; i<n; i++){
				scanf("%lld", &angka[i]); getchar();
			}
		
		// TEST PRINT	
		//	for(int i=0; i<n; i++){
		//		printf("%lld ", angka[i]);
		//	}
			
			//declare anggota pertama sebagai maximal awal
			long long max = angka[0];
			
			//bandingin 1/1
			for(int i =0; i<n; i++){
				//apakah nilai sekarang lebih besar dari maximal?
				if(angka[i] > max){
					max = angka[i]; //jika iya, set nilai sekarang menjadi maximal
				}
			}
			
			totalBerat = totalBerat + max;
		}
		
		printf("Case #%d: %lld\n", k, totalBerat);
	}
	
	
}
