#include<stdio.h>

int main(){
	
	long d,s,t;
	scanf("%ld %ld %ld", &d, &s, &t);
	
	//Ketika Daging termahal
	if(d>s && d>t){
		
		printf("Daging\n");
		
		//Ketika Sayur kedua
		if(s>t){
			printf("Sayur\n");
			printf("Telur\n"); //otomatis Telur ketiga
		}else{
			printf("Telur\n");
			printf("Sayur\n"); //otomatis Sayur ketiga
		}
		
	}
	//ketika Sayur termahal
	else if(s>d && s>t){
		printf("Telur\n");
		
		//siapa yang mahal kedua
		if(d>t){
			printf("Daging\n");
			printf("Telur\n");
		}else{
			printf("Telur\n");
			printf("Daging\n");
		}
	}
	//ketika Telur termahal
	else{
		printf("Telur\n");
		
		//siapa yang kedua termahal
		if(d>s){
			printf("Daging\n");
			printf("Sayur\n");
		}else{
			printf("Sayur\n");
			printf("Daging\n");
		}
	}
	
	
}
