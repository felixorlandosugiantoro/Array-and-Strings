#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        char word[100005];
        scanf("%s", word);

        int len = strlen(word);

        int is_palindrome = 1;

        int left = 0;
        int right = len - 1;

        while(left < right)
        if(word[left] != word[right]){

            is_palindrome = 0;
            break;
        }

        

        printf("Case #%d: ", i);

    }



    return 0;
}