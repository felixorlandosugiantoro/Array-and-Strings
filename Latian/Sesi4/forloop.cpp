#include<stdio.h>

int main(){
	
	//for({declare jenis variabel}; {aturannya}; {jalannya})
	
	for(int i = 0; i < 5 ; i++){
		printf("%d\n", i);
		
		for(int j = 0; j<3; j++){
			printf("%d", j);
		}
		
	}
	
	int j=0;
	while(j<5){
		int a = 0;
		j++;
		printf("%d\n", j);
	}
	
}
