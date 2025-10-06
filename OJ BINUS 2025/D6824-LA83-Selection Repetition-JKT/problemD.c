#include <stdio.h>

int main() {
    int T; // Variabel untuk menampung jumlah test case
    scanf("%d", &T);

    int i;
    for (i = 1; i <= T; i++) {
        int harga, persen, maks_cashback;
        scanf("%d %d %d", &harga, &persen, &maks_cashback);


        int cashback_hitung = (harga / 100) * persen;
        int cashback_final;

        // logika :
        if (cashback_hitung > maks_cashback) {
            cashback_final = maks_cashback;
        } else {
            cashback_final = cashback_hitung;
        }

        printf("Case #%d: %d\n", i , cashback_final);
    }

    return 0;
}