#include <stdio.h>

int main() {
    int n, i, j;
    printf("Masukkan ukuran sisi: ");
    scanf("%d", &n);

    // Loop untuk baris (i)
    for (i = 0; i < n; i++) {
        // Loop untuk kolom (j)
        for (j = 0; j < n; j++) {
            // Cek apakah ini adalah "tepi"
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" "); // Bagian tengah yang bolong
            }
        }
        printf("\n"); // Pindah baris setelah 1 baris selesai
    }
    return 0;
}