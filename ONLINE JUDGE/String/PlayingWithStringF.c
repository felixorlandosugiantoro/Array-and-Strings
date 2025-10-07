#include <stdio.h>
#include <string.h>

int main() {
    // Oke, pertama kita baca dulu ada berapa kasus uji
    int jumlah_kasus;
    scanf("%d", &jumlah_kasus);

    // Kalau sudah, ini buat perulangan untuk setiap kasusnya
    for (int i = 1; i <= jumlah_kasus; i++) {
        char kata[1001];
        scanf("%s", kata);

        int jumlah_perubahan;
        scanf("%d", &jumlah_perubahan);

        // Jadi ini untuk loop setiap perintah perubahan
        for (int j = 0; j < jumlah_perubahan; j++) {
            char huruf_lama, huruf_baru;
            // Baca perintahnya, misal "a r"
            // Spasi sebelum %c penting untuk menangkap karakter dengan benar
            scanf(" %c %c", &huruf_lama, &huruf_baru);

            int panjang_kata = strlen(kata);
            // Loop untuk memeriksa setiap huruf di dalam kata
            for (int k = 0; k < panjang_kata; k++) {
                // Jika huruf di kata sama dengan huruf yang mau diubah
                if (kata[k] == huruf_lama) {
                    // Langsung ganti dengan huruf baru
                    kata[k] = huruf_baru;
                }
            }
        }

        // Terakhir, cetak hasilnya sesuai format
        printf("Case #%d: %s\n", i, kata);
    }

    return 0;
}
