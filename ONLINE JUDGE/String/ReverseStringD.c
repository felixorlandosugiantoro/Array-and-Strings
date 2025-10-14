#include <stdio.h>
#include <string.h>

int main() {
    int jumlah_kata;
    scanf("%d", &jumlah_kata);

    getchar(); 

    for (int i = 1; i <= jumlah_kata; i++) {
        char kata[1001];

        // Utk baca seluruh baris, termasuk spasi, sampai 1000 karakter
        fgets(kata, sizeof(kata), stdin);

        kata[strcspn(kata, "\n")] = '\0';
        
        int panjang = strlen(kata);

        printf("Case #%d: ", i);

        for (int j = panjang - 1; j >= 0; j--) {
            printf("%c", kata[j]);
        }
        
        printf("\n");
    }

    return 0;
}