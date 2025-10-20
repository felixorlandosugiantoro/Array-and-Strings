#include <stdio.h>
#include <string.h>

int main(){
    char s[200];
    scanf("%s", s);

    int changed = 1;
    while(changed == 1){
        changed = 0;
        char result[200];
        int j = 0;

        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == s[i + 1]){
                changed = 1;   //ada yang keganti
                i++;           //skip
            }else{
                result[j] = s[i];
            	j++;
			}
        }

        result[j] = '\0';
        strcpy(s, result); //copy back to s for next iteration
    }

    printf("%s\n", s);
    return 0;
}
