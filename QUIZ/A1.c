#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    char x[100], y[100], z[100];

    sprintf(x, "%d", a);
    sprintf(y, "%d", b);
    sprintf(z, "%d", c);

    printf("%c\n", x[1]);
    printf("%c\n", y[1]);
    printf("%c\n", z[1]);
    
    return 0;
}