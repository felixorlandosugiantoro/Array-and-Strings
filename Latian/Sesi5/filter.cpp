#include<stdio.h>
#include<string.h>


int main(){
	char kata[155];
	scanf("%s", &kata); getchar();
	
	int len = strlen(kata);
	
	char hasil[155];
	int indexHasil = 0;
	for(int i = 0; i<len; i++){
		
		//filter
		if(kata[i] != 'U' && kata[i] != 'Z' && kata[i] != 'K'){
			hasil[indexHasil] = kata[i];
			indexHasil++;
		}
		
	}
	
	printf("%s", hasil);
}
