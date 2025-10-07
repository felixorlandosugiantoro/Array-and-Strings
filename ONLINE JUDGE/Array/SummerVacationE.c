#include <stdio.h>

// Definisikan konstanta untuk ukuran array
#define MAX_ARRAY_LENGTH 205

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    // Loop untuk setiap kasus uji
    for (int case_num = 1; case_num <= num_tests; case_num++) {
        int element_count;
        scanf("%d", &element_count);

        int number_list[MAX_ARRAY_LENGTH];
        for (int i = 0; i < element_count; i++) {
            scanf("%d", &number_list[i]);
        }

        int valid_sum_count = 0;

        // Iterasi melalui setiap angka untuk dijadikan "target"
        for (int target_index = 0; target_index < element_count; target_index++) {
            int current_target = number_list[target_index];
            int pair_was_found = 0; // Flag untuk menandai jika pasangan sudah ditemukan

            // Cari pasangan (angka1, angka2) yang jika dijumlahkan hasilnya == current_target
            for (int i = 0; i < element_count; i++) {
                // Lewati jika indeksnya sama dengan indeks target
                if (i == target_index) {
                    continue;
                }

                for (int j = 0; j < element_count; j++) {
                    // Lewati jika indeksnya sama dengan indeks target atau indeks i
                    if (j == target_index || j == i) {
                        continue;
                    }

                    // Periksa apakah kedua angka ini adalah pasangan yang dicari
                    if (number_list[i] + number_list[j] == current_target) {
                        valid_sum_count++;    // Tambah hitungan
                        pair_was_found = 1;   // Set flag
                        break;                // Keluar dari loop j, karena pasangan sudah ketemu
                    }
                }

                // Jika pasangan sudah ditemukan di loop j, keluar juga dari loop i
                if (pair_was_found) {
                    break;
                }
            }
        }

        printf("Case #%d: %d\n", case_num, valid_sum_count);
    }

    return 0;
}
