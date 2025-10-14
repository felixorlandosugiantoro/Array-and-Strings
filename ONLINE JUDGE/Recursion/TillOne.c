#include <stdio.h>

// Fungsi rekursif untuk menghitung nilai F(N)
long long F(long long n) {
    // Base case
    if (n == 1) {
        return 1;
    }

    // Aturan untuk angka genap
    if (n % 2 == 0) {
        return F(n / 2);
    } 
    // Aturan untuk angka ganjil yang sudah disederhanakan
    else {
        return F((n - 1) / 2) + F((n + 1) / 2);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long N;
        scanf("%lld", &N);
        
        long long result = 0;
        if (N > 0) {
           result = F(N);
        }

        printf("Case #%d: %lld\n", i, result);
    }

    return 0;
}