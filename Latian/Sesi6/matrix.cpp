#include<stdio.h>

int main(){
	
	int row, col;
	printf("row = ");
	scanf("%d", &row);
	printf("col = ");
	scanf("%d", &col);
	
	int matrix[row][col];
	
	//input
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			printf("Elemen ke [%d][%d] : ", i,j);
			scanf("%d", &matrix[i][j]);		
		}
	}
	
	//print
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			printf("%d ", matrix[i][j]);		
		}
		printf("\n");
	}
	
}
