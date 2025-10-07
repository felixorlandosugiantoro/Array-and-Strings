#include <stdio.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    for (int case_num = 1; case_num <= test_cases; case_num++) {
        int size;
        scanf("%d", &size);

        // Siapkan 3 tempat terpisah untuk matriks A, B, dan C.
        // Ini lebih mudah dibaca daripada array 3D.
        int matrix_a[55][55];
        int matrix_b[55][55];
        int matrix_c[55][55];

        // --- Membaca Matriks A ---
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                scanf("%d", &matrix_a[row][col]);
            }
        }
        // --- Membaca Matriks B ---
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                scanf("%d", &matrix_b[row][col]);
            }
        }
        // --- Membaca Matriks C ---
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                scanf("%d", &matrix_c[row][col]);
            }
        }

        // --- Langkah 1: Hitung A * B ---
        // Tempat untuk menyimpan hasil sementara A*B
        int result_ab[55][55] = {{0}};
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                for (int i = 0; i < size; i++) {
                    result_ab[row][col] += matrix_a[row][i] * matrix_b[i][col];
                }
            }
        }

        // --- Langkah 2: Hitung (hasil A*B) * C ---
        // Tempat untuk menyimpan hasil akhir
        int final_result[55][55] = {{0}};
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                for (int i = 0; i < size; i++) {
                    final_result[row][col] += result_ab[row][i] * matrix_c[i][col];
                }
            }
        }

        // --- Cetak Hasil Akhir ---
        printf("Case #%d:\n", case_num);
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                printf("%d", final_result[row][col]);
                // Beri spasi jika bukan angka terakhir di baris
                if (col < size - 1) {
                    printf(" ");
                }
            }
            // Pindah baris setelah satu baris selesai dicetak
            printf("\n");
        }
    }

    return 0;
}

