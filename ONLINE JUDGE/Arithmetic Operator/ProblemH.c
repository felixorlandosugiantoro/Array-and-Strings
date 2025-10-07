#include <stdio.h>

int main() {

    double Physical, Magical, Pure;
        scanf("%lf %lf %lf", &Physical, &Magical, &Pure);
        
    double total_damage = (Physical * 0.2) + (Magical * 0.3) + (Pure * 0.5);
        printf("%.2lf\n", total_damage);

    return 0;
}

