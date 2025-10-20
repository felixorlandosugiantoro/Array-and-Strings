#include<stdio.h>

int main(){
	
	//r = row, c = col
	//1 = matriks A, 2 = matriks B
	int r1,c1,r2,c2;
	
	//input ukuran matriks 1
	printf("row and column matrix 1 : ");
	scanf("%d %d", &r1, &c1);
	
	//input ukuran matriks 2
	printf("row and column matrix 2 : ");
	scanf("%d %d", &r2, &c2);
	
	//apakah bisa?
	if(c1 != r2){
		printf("tidak bisa dikalikan!\n");
	}else{
		
		//kalau sama berarti bisa
		int A[r1][c1], B[r2][c2], result[r1][c2];
		
		//input element dari matrix A
		for(int i=0; i<r1; i++){
			for(int j=0; j<c1; j++){
				scanf("%d", &A[i][j]);
			}
		}
		
		//input element dari matrix B
		for(int i=0; i<r2; i++){
			for(int j=0; j<c2; j++){
				scanf("%d", &B[i][j]);
			}
		}
		
		//declare 0 di result
		for(int i=0; i<r1; i++){
			for(int j=0; j<c2; j++){
				result[i][j] = 0;
			}
		}
		
		for(int i=0; i<r1; i++){ //loop dari row matrix A
			for(int j=0; j<c2; j++){ //loop dari col matrix B
				
				//program
				for(int k=0; k<c1; k++){ //access element dari row n col
					
					result[i][j] += A[i][k] * B[k][j];
					
				}
			}
		}
		
		//print hasil
		for(int i=0; i<r1; i++){
			for(int j=0; j<c2; j++){
				printf("%d ", result[i][j]);
			}
			printf("\n");
		}
		
	}
}
