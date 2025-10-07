#include <stdio.h>
#include <string.h>

int main() {
    // Oke, pertama kita baca dulu ada berapa kata yang mau dibalik
    int jumlah_kata;
    scanf("%d", &jumlah_kata);

    // Kalau sudah, ini buat perulangan untuk setiap katanya
    for (int i = 1; i <= jumlah_kata; i++) {
        // Siapkan tempat untuk menampung katanya
        char kata[1001];
        scanf("%s", kata);

        // Hitung panjang katanya dulu pakai strlen
        int panjang = strlen(kata);

        // Cetak awalan "Case #..." sesuai contoh di soal
        printf("Case #%d: ", i);

        // Nah, ini bagian intinya. Kita cetak hurufnya satu-satu
        // tapi dari belakang (dari indeks terakhir sampai ke 0)
        for (int j = panjang - 1; j >= 0; j--) {
            printf("%c", kata[j]);
        }
        
        // Terakhir, kasih baris baru biar rapi
        printf("\n");
    }

    return 0;
}
