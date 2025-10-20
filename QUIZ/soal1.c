#include <stdio.h>
#include <string.h> // Untuk strcmp

int main() {
    char productCode[11]; // 10 digit + 1 null terminator
    int quantity;
    double price;
    double totalAmount = 0.0;

    while (1) { // Loop tak terbatas sampai di-break
        printf("Masukkan kode produk (10 digit, 0000000000 untuk selesai): ");
        scanf("%s", productCode);

        // Cek kondisi berhenti
        if (strcmp(productCode, "0000000000") == 0) {
            break; // Keluar dari loop while(1)
        }

        // Validasi input Kuantitas
        do {
            printf("Masukkan kuantitas (min 1): ");
            scanf("%d", &quantity);
            if (quantity < 1) {
                printf("Kuantitas tidak valid, harus minimal 1.\n");
            }
        } while (quantity < 1);

        // Validasi input Harga
        do {
            printf("Masukkan harga (min 1): ");
            scanf("%lf", &price); // Gunakan %lf for double
            if (price < 1) {
                printf("Harga tidak valid, harus minimal 1.\n");
            }
        } while (price < 1);

        // Hitung total
        totalAmount += (quantity * price);
        printf("Subtotal produk ini: %.2lf\n", quantity * price);
        printf("----------------------------------------\n");
    }

    // Cetak total akhir
    printf("\n========================================\n");
    printf("Total yang harus dibayar: %.2lf\n", totalAmount);
    printf("========================================\n");

    return 0;
}