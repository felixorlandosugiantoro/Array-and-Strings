#include <stdio.h>

int main() {
    // Oke, pertama kita baca dulu ada berapa kasus uji
    int jumlah_kasus;
    scanf("%d", &jumlah_kasus);

    // Kalau sudah, ini buat perulangan untuk setiap kasusnya
    for (int i = 1; i <= jumlah_kasus; i++) {
        int panjang_kalimat;
        scanf("%d", &panjang_kalimat);
        
        // Penting: Ambil karakter newline (\n) sisa dari scanf sebelumnya
        // biar tidak mengganggu saat kita baca kalimatnya
        getchar(); 

        char kalimat_kotor[101];
        char kalimat_bersih[101];
        int indeks_bersih = 0; // Penanda posisi untuk kalimat_bersih

        // Jadi ini untuk loop membaca setiap karakter satu per satu
        for (int j = 0; j < panjang_kalimat; j++) {
            char karakter = getchar();
            
            // Cek apakah karakter ini adalah huruf kecil (a sampai z)
            if (karakter >= 'a' && karakter <= 'z') {
                // Kalau iya, simpan ke kalimat_bersih
                kalimat_bersih[indeks_bersih] = karakter;
                indeks_bersih++;
            }
        }
        
        // Kasih penutup string di akhir kalimat bersih
        kalimat_bersih[indeks_bersih] = '\0';

        // Terakhir, cetak hasilnya sesuai format
        printf("Case #%d: %s\n", i, kalimat_bersih);
    }

    return 0;
}
