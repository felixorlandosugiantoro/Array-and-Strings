#include <stdio.h>

int main() {
    int n;

        scanf("%d", &n);

    long long total_damage;
    int a = 100;
    int b = 50;

    total_damage = ((long long)n * (2 * a + (long long)(n - 1) * b)) / 2;

        printf("%lld\n", total_damage);

    return 0;
}

