#include <stdio.h>

int main() {
    double price, disc, total;
    
    scanf("%lf %lf", &price, &disc);
        total = ((price - disc) / price)*100;
    printf("%.2lf%%\n", total);
    
    return 0;
}