#include<stdio.h>
#include<string.h>

int main(){
	
	char kata[100];
	scanf("%s", &kata);
//	printf("%s", kata);
	
	int banyakhuruf = strlen(kata);
	
	char katabersih[100];
	int indexbersih = 0;
	for(int i=0; i<banyakhuruf; i++){
		if(kata[i] >= 'A' && kata[i] <= 'Z'){
			katabersih[indexbersih] = kata[i];
			indexbersih++;
		}
		if(kata[i] >= 'a' && kata[i] <= 'z'){
			katabersih[indexbersih] = kata[i];
			indexbersih++;
		}
	}
	
	printf("%s", katabersih);
	
}
