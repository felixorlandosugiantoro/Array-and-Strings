#include <stdio.h>

int main() {

    int N, A, S;
    scanf("%d %d %d\n", &N, &A, &S);

    printf("%d\n", N /10 % 10);
    printf("%d\n", A /10 % 10);
    printf("%d\n", S /10 % 10);
 
    return 0;
}