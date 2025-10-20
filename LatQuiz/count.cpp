#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	
	char map[101][101];
	
	for(int i=0; i<=t; i++){
		scanf("%[^\n]", &map[i]); getchar();
	}
	
	int huruf[27] = {0};
	for(int i=0; i<=t; i++){
		for(int j=0; j<=t; j++){
			//filtering
			if(map[i][j] >= 'a' && map[i][j] <= 'z'){
				huruf[map[i][j] - 'a']++;		
			}else if(map[i][j] >= 'A' && map[i][j] <= 'Z'){
				huruf[map[i][j] - 'A']++;		
			}
		}
	}
	
	for(int i=0; i<26; i++){
		if(huruf[i] > 0){
			printf("%c : %d\n", i+'a', huruf[i]);
		}
	}
}
