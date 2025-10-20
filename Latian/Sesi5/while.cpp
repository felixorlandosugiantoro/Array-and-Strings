#include<stdio.h>
#include<string.h>

int main(){
	
	char kata[6];
	scanf("%s", &kata); getchar();
	
	int len = strlen(kata);
	int indexAkhir = len-1;
	int indexAwal = 0;
	
	int cek = 1;
	while(indexAwal < indexAkhir){
		if(kata[indexAwal] != kata[indexAkhir]){
			cek = 0;
			break;
		}
		
		indexAwal++;
		indexAkhir--;
		
	}
	
	if(cek == 0){
		printf("Not Palindrome");
	}else{
		printf("Palindrome");
	}
}
