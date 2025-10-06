#include <stdio.h>

int main() {
    
    double a, b, c, d;
    for (int i = 0; i < 3; i++) {
        
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        double total_sum = (2 * a) + (2 * b) + (2 * c) + d;
        printf("%.2lf\n", total_sum);
    }

  

    return 0;
}