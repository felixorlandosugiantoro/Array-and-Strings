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
	
	//bandingin apakah sama
	
	int cek = 1;
	
	for(int i=0; i<len; i++){
		if(reversed[i] != kata[i]){
			cek = 0; //0 itu artinya ga palindrome
			break;
		}
	}
	
	if(cek == 0){
		printf("Not Palindrome");
	}else{
		printf("Palindrome");
	}
	
//	printf("%s", reversed);
	
}
