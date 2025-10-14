#include <stdio.h>
#include <string.h>

int main() {
    int T; // Jumlah test case
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char kata[1001];
        scanf("%s", kata); // Baca string awal

        int M; // Jumlah perintah penggantian
        scanf("%d", &M);

        // Lakukan penggantian sebanyak M kali
        for (int j = 0; j < M; j++) {
            char huruf_lama, huruf_baru;
            // Baca dua huruf, contoh: "a b"
            // Spasi sebelum %c penting untuk 'memakan' sisa enter dari scanf sebelumnya
            scanf(" %c %c", &huruf_lama, &huruf_baru);

            int panjang = strlen(kata);
            // Cek setiap karakter di dalam kata
            for (int k = 0; k < panjang; k++) {
                // Jika ketemu huruf yang mau diganti
                if (kata[k] == huruf_lama) {
                    // Langsung ganti dengan huruf baru
                    kata[k] = huruf_baru;
                }
            }
        }

        // Cetak hasil akhir setelah semua perubahan
        printf("Case #%d: %s\n", i, kata);
    }

    return 0;
}