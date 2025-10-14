#include <stdio.h>
#include <string.h>

int main() {
    // Siapin variabel buat nampung berapa banyak baris kata yang mau diinput
    int jumlah_kata;
    
    // Minta user masukin jumlah barisnya
    scanf("%d", &jumlah_kata);

    // Ini penting buat 'nangkep' karakter enter setelah input angka, biar nggak ngaco di `fgets` nanti
    getchar(); 

    // Ulangin prosesnya sebanyak jumlah kata yang tadi diinput
    for (int i = 1; i <= jumlah_kata; i++) {
        // Bikin tempat buat nampung katanya, ukurannya 1001 buat jaga-jaga
        char kata[1001];

        // Baca satu baris penuh dari input user, termasuk spasi
        fgets(kata, sizeof(kata), stdin);

        // `fgets` itu suka bawa karakter 'enter' di akhir. Baris ini buat ngilangin 'enter' itu.
        kata[strcspn(kata, "\n")] = '\0';
        
        // Hitung panjang kata yang udah bersih dari 'enter'
        int panjang = strlen(kata);

        // Cetak awalan buat outputnya, contoh: "Case #1: "
        printf("Case #%d: ", i);

        // Sekarang kita putar balik katanya, mulai dari huruf paling belakang
        for (int j = panjang - 1; j >= 0; j--) {
            // Cetak hurufnya satu per satu dari belakang
            printf("%c", kata[j]);
        }
        
        // Kasih baris baru biar rapi setelah selesai satu kata
        printf("\n");
    }

    return 0; // Tandanya program selesai dengan baik
}