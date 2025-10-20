#include<stdio.h>
#include<string.h>

int main(){
    char s[101], result[101];
    scanf("%s", s);

    int len = strlen(s);
    int j = 0; //index untuk result

    result[j] = s[0]; //simpan huruf pertama
	j++;
	
    for(int i = 1; i < len; i++){
        if(s[i] != s[i - 1]){ 
            result[j] = s[i]; //tambahkan hanya jika beda dari sebelumnya
            j++;
        }
    }

    result[j] = '\0'; //akhiri string
    printf("%s\n", result);
    return 0;
}

