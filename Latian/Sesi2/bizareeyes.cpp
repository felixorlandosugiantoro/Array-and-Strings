#include<stdio.h>

int main(){
	
	int size;
	scanf("%d", &size); getchar();
	
	char map[size+1][size+1];
	char mapHasil[size+1][size+1];
	
	//input map
	for(int i=0; i<size; i++){ //looping row
		for(int j=0; j<size; j++){ //looping column
			scanf("%c", &map[i][j]);
		}
		getchar();
	}
	
	//test print map
//	for(int i=0; i<size; i++){ //looping row
//		for(int j=0; j<size; j++){ //looping column
//			printf("%c", map[i][j]);
//		}
//		printf("\n");
//	}
	
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			//rumus transpose
			mapHasil[size-j-1][i] = map[i][j];
		}
	}
	
	for(int i=0; i<size; i++){ //looping row
		for(int j=0; j<size; j++){ //looping column
			printf("%c", mapHasil[i][j]);
		}
		printf("\n");
	}
}
