#include <stdio.h>

int main(){
    double a, b;
    
    scanf("%lf %lf", &a,&b);
    double total = ((b / a)*100);
    printf("%.4lf%%\n", total);
    
    return 0;
}