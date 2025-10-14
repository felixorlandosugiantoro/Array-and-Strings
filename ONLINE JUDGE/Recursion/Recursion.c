#include <stdio.h>

// Fungsi rekursif untuk menghitung F(n) dan jumlah panggilan kelipatan 3
long long calculateF(int n, int *count3) {
    // Tambah counter kalau n kelipatan 3 (dan bukan nol)
    if (n % 3 == 0 && n != 0) {
        (*count3)++;
    }

    // Base case sesuai deskripsi soal
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 2;
    }

    // Aturan khusus untuk kelipatan 5
    if (n % 5 == 0) {
        return n * 2;
    }

    // Rumus rekursif umum
    return calculateF(n - 1, count3) + n + calculateF(n - 2, count3) + n - 2;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);

        int count3 = 0; // Reset counter untuk setiap test case
        long long result = calculateF(N, &count3);

        printf("Case #%d: %lld %d\n", i, result, count3);
    }

    return 0;
}