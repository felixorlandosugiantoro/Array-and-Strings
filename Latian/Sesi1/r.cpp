#include<stdio.h>

int main(){
	char NIM[11];
	char nama[101];
	char kelas;
	int no;
	
	scanf("%s", &NIM); getchar();
	scanf("%[^\n]", &nama); getchar();
	scanf("%c %d", &kelas, &no);

	printf("Id    : %s\n", NIM);
	printf("Name  : %s\n", nama);
	printf("Class : %c\n", kelas);
	printf("Num   : %d\n", no);
	
}
