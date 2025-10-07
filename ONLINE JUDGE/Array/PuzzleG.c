#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matriks[101][101];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    int valid = 1; // Penanda: 1 = Yay, 0 = Nay

    // Memeriksa setiap baris dan kolom
    for (int i = 0; i < n; i++) {
        int cek_baris[101] = {0};  // Daftar periksa untuk baris ke-i
        int cek_kolom[101] = {0};  // Daftar periksa untuk kolom ke-i
        for (int j = 0; j < n; j++) {
            // Cek baris: jika angka sudah pernah muncul, tidak valid
            if (cek_baris[matriks[i][j]]) valid = 0;
            cek_baris[matriks[i][j]] = 1;

            // Cek kolom: jika angka sudah pernah muncul, tidak valid
            if (cek_kolom[matriks[j][i]]) valid = 0;
            cek_kolom[matriks[j][i]] = 1;
        }
    }

    if (valid) {
        printf("Yay\n");
    } else {
        printf("Nay\n");
    }

    return 0;
}
