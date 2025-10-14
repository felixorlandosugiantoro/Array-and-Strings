#include <stdio.h>


int main() {
    int jumlah_kata;
    scanf("%d", &jumlah_kata);

    for (int i = 1; i <= jumlah_kata; i++) {
        char kata[1001];
        scanf("%s", kata);
        
        // --- PERUBAHAN DI SINI ---
        // Menghitung panjang string secara manual
        int panjang = 0;
        while (kata[panjang] != '\0') {
            panjang++;
        }

        printf("Case #%d: ", i);

        // Logika membaliknya tetap sama dan sudah benar
        for (int j = panjang - 1; j >= 0; j--) {
            printf("%c", kata[j]);
        }
        
        printf("\n");
    }

    return 0;
}