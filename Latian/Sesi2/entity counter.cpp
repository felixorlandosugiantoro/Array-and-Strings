#include<stdio.h>
#include<string.h>

int main(){
	
	char kata[155];
	scanf("%s"); getchar();
	
	int huruf[27] = {0};
	
	for(int i=0; i<strlen(kata); i++){
		//filtering
		if(kata[i] >= 'a' && kata[i] <= 'z'){
			printf("test");
			huruf[kata[i] - 'a']++;		
		}else if(kata[i] >= 'A' && kata[i] <= 'Z'){
			huruf[kata[i] - 'A']++;		
		}
	}
	
	for(int i=0; i<26; i++){
		if(huruf[i] > 0){
			printf("%c : %d\n", i+'a', huruf[i]);
		}
	}
}
