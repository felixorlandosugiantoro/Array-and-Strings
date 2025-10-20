#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t); getchar();
	
	for(int i=0; i<t; i++){
		char kata[101];
		scanf("%[^\n]", &kata); getchar();
		
		char huruf;
		scanf("%c", &huruf); getchar();
		
		//filtering
		for(int j=0; j<strlen(kata); j++){
			
			//cek apakah dia itu huruf yang diminta
			if(kata[j] == huruf){
				//apakah huruf besar
				if(huruf >= 'A' && huruf <= 'Z'){
					kata[j] += 32;
				}
				//kalau huruf kecil
				else if(huruf >='a' && huruf <= 'z'){
					kata[j] -= 32;
				}
			}
		}
		
		printf("%s\n", kata);
	}
}
