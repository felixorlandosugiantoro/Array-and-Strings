#include <stdio.h>
#include <math.h>

int main() {
    int x;
    double y;

    scanf("%d %lf", &x, &y);
    double total_uang = x * pow(1 + (y / 100.0), 3);

    printf("%.2lf\n", total_uang);

    return 0;
}
