#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    int a;
    int temp[110];

    scanf("%d", &a);

    for(int i =0; i<a+1; i++){
        if(i==0){
            temp[0] = 0;
        }else if(i == 1){
            temp[1] = 1;
        }
        temp[2*i] = temp[i];
        temp[2*i+1] = temp [i]+temp[i+1];
    }

    int biggest = 0;
    for(int i=0; i<a+1; i++){
        if (temp[i]>biggest) biggest = temp[i];
    }
    
    printf("%d", biggest);

    return 0;
}