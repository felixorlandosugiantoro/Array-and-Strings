#include<stdio.h>
#include<string.h>

int main(){
	
	char kata[6];
	char reversed[6];
	
	scanf("%s", &kata); getchar();
//	printf("%s", kata);
	
	int len = strlen(kata);
	int indexAkhir = len-1;
	int indexAwal = 0;
	
	for(int i = indexAkhir; i>=0; i--){
		reversed[indexAwal] = kata[i];
		indexAwal++;
	}
	
	printf("%s", reversed);
	
}
