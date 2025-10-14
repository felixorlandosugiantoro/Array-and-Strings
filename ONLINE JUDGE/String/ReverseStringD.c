#include <stdio.h>
#include <string.h>

int main() {
    int jumlah_kata;
    scanf("%d", &jumlah_kata);

    for (int i = 1; i <= jumlah_kata; i++) {
        char kata[1001];
        // Karena dijamin tidak ada spasi, cukup pakai scanf("%s")
        scanf("%s", kata);
        
        int panjang = strlen(kata);

        printf("Case #%d: ", i);

        // Logika membalik stringnya sudah benar!
        for (int j = panjang - 1; j >= 0; j--) {
            printf("%c", kata[j]);
        }
        
        printf("\n");
    }

    return 0;
}