#include<stdio.h>
#include<string.h>

int main(){
	
	int t;
	scanf("%d", &t); getchar();
	
	for(int i=0; i<t; i++){
		char kata[1001];
		scanf("%[^\n]", &kata); getchar();
		
		//filtering
		for(int j=0; j<strlen(kata); j++){
			if(kata[j] >= 'a' && kata[j] <= 'z'){
				kata[j] -= 32;
			}else if(kata[j] >= 'A' && kata[j] <= 'Z'){
				kata[j] += 32;
			}
		}
		
		printf("%s\n", kata);
	}
}
