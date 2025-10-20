#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		char kata[151];
		int hitung[27]={0}; //buat nyimpen banyaknya per alfabet
		scanf("%[^\n]", &kata); getchar();
		
		//entity counter
		for(int j=0; j<strlen(kata); j++){
			//filter huruf noncapital
			if(kata[j] >= 'a' && kata[j] <= 'z'){
				hitung[kata[j]-'a']++;
			}
			
			//filter huruf capital
			else if(kata[j] >= 'A' && kata[j] <= 'Z'){
				hitung[kata[j]-'A']++;
			}
		}
		
		//print
		for(int j=0; j<27; j++){
			if(hitung[j] > 0){
				printf("%c : %d\n", j+'a', hitung[j]);
			}
		}
		
		//huruf unik
		int count = 0;
		for(int j=0; j<27; j++){
			if(hitung[j] > 0){
				count++;
			}
		}
		
		printf("Huruf unik : %d\n", count);
	}
}
