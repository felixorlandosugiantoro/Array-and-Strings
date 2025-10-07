#include <stdio.h>

#define MAX_SIZE 1005

int main() {
    int n;
    scanf("%d", &n);

    int values[MAX_SIZE];
    int indices[MAX_SIZE];
    int result[MAX_SIZE];

    // Membaca input untuk kedua array
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &indices[i]);
    }

    // Proses utama: Mengatur ulang array 'indices' ke dalam 'result'
    // berdasarkan urutan nilai di dalam array 'values'.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Cari nilai 'i' di dalam array 'values'
            if (values[j] == i) {
                // Gunakan posisi (j) untuk memetakan indeks ke hasil
                result[i] = indices[j];
                break; // Optimasi: lanjut ke nilai 'i' berikutnya
            }
        }
    }

    // Mencetak hasil akhir dalam satu baris
    for (int i = 0; i < n; i++) {
        // Cetak spasi setelah angka, kecuali untuk angka terakhir
        printf("%d%c", result[i], (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}

