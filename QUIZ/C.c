#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int a;
    char kar[1100][1100];
    char temp[1100][1100];

    scanf("%d", &a);
    getchar();

    for(int i=0; i<a; i++){
        scanf("&[^\n]", kar[i]); getchar();
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<strlen(kar[i]);j++){
            if(toupper(kar[i][j]) == 'W'){
                int count = 0;
                for(int k=j; k>0; k--){
                    temp[i][count] = kar[i][k-1];
                    count++;
                }
                temp[i][j] = kar[i][j];
                for(int k=0; k<j; k++){
                    kar[i][k] = temp[i][k];
                }
            }
            temp[i][j] = kar[i][j];
        }
        printf("%s\n", temp[i]);
    }


    
    return 0;
}