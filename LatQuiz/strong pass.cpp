#include<stdio.h>
#include<string.h>

int main(){
	char password[101];
	scanf("%s", &password);
	
	//buat declare pengecek
	int cekangka = 0;
	int cekupper = 0;
	int cekspecial = 0;
	
	int len = strlen(password);
	
	if(len < 8 || len > 33){
		//buat cek apakah valid?
		printf("invalid password\n");
	}else{
		for(int i=0; i<strlen(password); i++){
			//cek apakah ada angka?
			if(password[i] >= '0' && password[i] <= '9'){
				cekangka = 1;
			}
			//cek apakah ada huruf besar
			else if(password[i] >= 'A' && password[i] <= 'Z'){
				cekupper = 1;
			}
			//cek special
			else if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$'  || password[i] == '%'  || password[i] == 'ˆ'  || password[i] == '&'  || password[i] == '*'  || password[i] == '('  || password[i] == ')'  || password[i] == '-'  || password[i] == '+'){
				cekspecial = 1;
			}
		}
		
		int total = cekangka + cekspecial + cekupper;
		
		if(total < 2){
			printf("weak password\n");
		}else if(total == 2){
			printf("medium password\n");
		}else if(total == 3){
			printf("strong password\n");
		}
		
	}
	
}
