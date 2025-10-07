#include <stdio.h>
#include <string.h>

int main() {
    // Oke, pertama kita baca dulu ada berapa kasus uji
    int jumlah_kasus;
    scanf("%d", &jumlah_kasus);

    // Kalau sudah, ini buat perulangan untuk setiap kasusnya
    for (int i = 1; i <= jumlah_kasus; i++) {
        int panjang_pesan, kunci;
        scanf("%d %d", &panjang_pesan, &kunci);

        char pesan[101];
        scanf("%s", pesan);

        // Jadi ini untuk loop setiap huruf di dalam pesan
        for (int j = 0; j < panjang_pesan; j++) {
            // 1. Ubah huruf jadi angka (a=0, b=1, ...)
            int nilai_huruf = pesan[j] - 'a';

            // 2. Tambahkan dengan kunci K
            // 3 & 4. Pastikan hasilnya tetap antara 0-25 pakai modulus (%)
            int nilai_baru = (nilai_huruf + kunci) % 26;

            // 5. Ubah angka kembali jadi huruf
            pesan[j] = nilai_baru + 'a';
        }

        // Terakhir, cetak hasilnya sesuai format
        printf("Case #%d: %s\n", i, pesan);
    }

    return 0;
}
