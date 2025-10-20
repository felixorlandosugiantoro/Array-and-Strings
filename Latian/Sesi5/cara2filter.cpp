#include<stdio.h>
#include<string.h>


int main(){
	char pass[155];
	scanf("%s", &pass); getchar();
	
	int len = strlen(pass);
	
	//cek apakah memenuhi syarat panjang	
	if(len >= 7){
		int cekspecial = 0;
		int cekcaps = 0;
		int cekangka = 0;
		int cekkecil = 0;
		
		//cek apakah ada
		for(int i=0; i<len; i++){
			if(pass[i] >= 'A' && pass[i] <= 'Z'){
				cekcaps = 1;
			}else if(pass[i] == '@' || pass[i] == '#' || pass[i] == '-' || pass[i] == '/' || pass[i] == ']'){
				cekspecial = 1;
			}else if(pass[i] >= 'a' && pass[i] <= 'z'){
				cekkecil = 1;
			}else if(pass[i] >= '0' && pass[i] <= '9'){
				cekangka = 1;
			}
		}		
		
		int totalterpenuhi = cekcaps + cekspecial + cekkecil + cekangka;
		if(totalterpenuhi == 1){
			printf("Very Weak\n");
		}else if(totalterpenuhi == 2){
			printf("Weak\n");
		}else if(totalterpenuhi == 3){
			printf("Moderate\n");
		}else{
			printf("Strong\n");
		}
	
	}
	else{
		printf("Password Kurang Panjang!\n");
	}
}
