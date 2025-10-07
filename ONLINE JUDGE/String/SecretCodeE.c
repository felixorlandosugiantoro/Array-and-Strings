#include <stdio.h>
#include <string.h>

int main() {
    // Oke, pertama kita baca dulu ada berapa kasus uji
    int jumlah_kasus;
    scanf("%d", &jumlah_kasus);

    // Kalau sudah, ini buat perulangan untuk setiap kasusnya
    for (int i = 1; i <= jumlah_kasus; i++) {
        int jumlah_perintah;
        char kode[1001];
        // Baca jumlah perintah dan kode awalnya
        scanf("%d %s", &jumlah_perintah, kode);

        // Loop untuk setiap perintah membalik
        for (int j = 0; j < jumlah_perintah; j++) {
            int awal, akhir;
            scanf("%d %d", &awal, &akhir);

            // Jadi ini untuk menyesuaikan indeks. Di soal, indeks mulai dari 1,
            // tapi di C, array mulai dari 0. Jadi kita kurangi satu.
            int kiri = awal - 1;
            int kanan = akhir - 1;

            // Proses membalik: tukar karakter dari ujung kiri dan kanan
            // sampai mereka bertemu di tengah.
            while (kiri < kanan) {
                // Simpan sementara karakter kiri
                char temp = kode[kiri];
                // Ganti karakter kiri dengan karakter kanan
                kode[kiri] = kode[kanan];
                // Ganti karakter kanan dengan yang tadi kita simpan
                kode[kanan] = temp;
                
                // Geser penunjuknya ke tengah
                kiri++;
                kanan--;
            }
        }
        
        // Terakhir, cetak hasilnya sesuai format
        printf("Case #%d: %s\n", i, kode);
    }

    return 0;
}
