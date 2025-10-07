#include <stdio.h>
#include <string.h>

int main() {
    // Oke, pertama kita baca dulu ada berapa pesan yang mau dienkripsi
    int jumlah_kasus;
    scanf("%d", &jumlah_kasus);

    // Kalau sudah, ini buat perulangan untuk setiap pesannya
    for (int i = 1; i <= jumlah_kasus; i++) {
        char pesan[1001];
        scanf("%s", pesan);

        int panjang = strlen(pesan);
        
        // Jadi ini untuk nyimpan pesan yang sudah diubah dan kuncinya
        char pesan_enkripsi[1001];
        int kunci[1001];

        // Loop untuk ngecek setiap huruf di pesan
        for (int j = 0; j < panjang; j++) {
            char huruf_sekarang = pesan[j];
            char vokal_terdekat;
            int jarak;

            // Kita cek hurufnya masuk grup mana berdasarkan soal
            if (huruf_sekarang >= 'A' && huruf_sekarang <= 'D') {
                vokal_terdekat = 'A';
                jarak = huruf_sekarang - 'A';
            } else if (huruf_sekarang >= 'E' && huruf_sekarang <= 'H') {
                vokal_terdekat = 'E';
                jarak = huruf_sekarang - 'E';
            } else if (huruf_sekarang >= 'I' && huruf_sekarang <= 'N') {
                vokal_terdekat = 'I';
                jarak = huruf_sekarang - 'I';
            } else if (huruf_sekarang >= 'O' && huruf_sekarang <= 'T') {
                vokal_terdekat = 'O';
                jarak = huruf_sekarang - 'O';
            } else { // Sisanya pasti grup U (U sampai Z)
                vokal_terdekat = 'U';
                jarak = huruf_sekarang - 'U';
            }

            // Simpan hasilnya
            pesan_enkripsi[j] = vokal_terdekat;
            kunci[j] = jarak;
        }

        // Jangan lupa kasih null terminator di akhir string
        pesan_enkripsi[panjang] = '\0';

        // Terakhir, kita cetak hasilnya sesuai format
        printf("Case #%d:\n", i);
        printf("%s\n", pesan_enkripsi);
        for (int j = 0; j < panjang; j++) {
            printf("%d", kunci[j]);
        }
        printf("\n");
    }

    return 0;
}
