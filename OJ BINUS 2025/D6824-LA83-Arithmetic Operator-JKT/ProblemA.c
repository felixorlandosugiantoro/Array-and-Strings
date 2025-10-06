#include <stdio.h>

int main() {
    int x, y;

    while(scanf("%d + %d =", &x,&y) ==2){
    int z = x + y;
    printf("%d\n", z);
    }

    return 0;
}