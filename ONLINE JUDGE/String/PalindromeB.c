#include <stdio.h>
#include <string.h>

int main() {
    // Oke, pertama kita baca dulu ada berapa kata yang mau dicek
    int jumlah_kasus;
    scanf("%d", &jumlah_kasus);

    // Kalau sudah, ini buat perulangan untuk setiap katanya
    for (int i = 1; i <= jumlah_kasus; i++) {
        char kata[501];
        scanf("%s", kata);

        int panjang = strlen(kata);
        
        // Jadi ini untuk penanda, kita anggap aja awalnya semua kata itu palindrome
        int ini_palindrome = 1; // 1 itu artinya 'iya' atau 'true'

        // Siapkan dua penunjuk, satu mulai dari kiri (awal)
        int kiri = 0;
        // Satu lagi mulai dari kanan (akhir)
        int kanan = panjang - 1;

        // Loop ini akan jalan terus selama penunjuk kiri belum lewatin yang kanan
        while (kiri < kanan) {
            // Kita bandingin hurufnya
            if (kata[kiri] != kata[kanan]) {
                // Kalau ada satu aja yang beda, langsung kita tandain bukan palindrome
                ini_palindrome = 0; // 0 itu artinya 'bukan' atau 'false'
                break; // Langsung berhenti aja, gak perlu cek lagi
            }
            
            // Kalau sama, geser penunjuknya ke tengah
            kiri++;
            kanan--;
        }

        // Terakhir, kita cetak hasilnya berdasarkan penanda tadi
        printf("Case #%d: ", i);
        if (ini_palindrome == 1) {
            printf("Yay, it's a palindrome\n");
        } else {
            printf("Nah, it's not a palindrome\n");
        }
    }

    return 0;
}

