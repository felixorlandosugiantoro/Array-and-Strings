#include<stdio.h>
#include<string.h>

int main(){
	
	//testcase
	int t;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		
		char kata[151];
		scanf("%[^\n]", &kata); getchar();
		
		int len = strlen(kata);
		
//		//CASE 1 (ubah noncapital jadi capital)
//		//cek 1/1 anggota hurufnya dia itu huruf besar / kecil
//		for(int j=0; j<len; j++){
//			
//			//filter huruf noncapital
//			if(kata[j] >= 'a' && kata[j] <= 'z'){
//				kata[j] = kata[j] - 32; //ubah noncapital jadi capital
//			}
//		}
		
//		//CASE 2 (ubah capital jadi non capital)
//		//cek 1/1 anggota hurufnya dia itu huruf besar / kecil
//		for(int j=0; j<len; j++){
//			
//			//filter huruf noncapital
//			if(kata[j] >= 'A' && kata[j] <= 'Z'){
//				kata[j] = kata[j] + 32; //ubah noncapital jadi capital
//			}
//		}
//		printf("Case #%d: %s\n", i, kata);
		
		//CASE 3 (ubah kebalikan)
		//cek 1/1 anggota hurufnya dia itu huruf besar / kecil
		for(int j=0; j<len; j++){
			
			//filter huruf noncapital
			if(kata[j] >= 'a' && kata[j] <= 'z'){
				kata[j] = kata[j] - 32; //ubah noncapital jadi capital
			}
			//filter huruf capital
			else if(kata[j] >= 'A' && kata[j] <= 'Z'){
				kata[j] = kata[j] + 32; //ubah capital jadi noncapital
			}
		}		
	printf("Case #%d: %s\n", i, kata);
	
	}
}
