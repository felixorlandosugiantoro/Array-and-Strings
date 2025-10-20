#include <stdio.h>

int main() {
    // Matriks A dan B dari soal 
    int A[4][4] = {
        {5, 7, 8, 2},
        {3, 6, 4, 5},
        {2, 7, 1, 4},
        {1, 3, 9, 6}
    };

    int B[4][4] = {
        {3, 5, 4, 8},
        {2, 5, 2, 3},
        {1, 1, 2, 7},
        {3, 7, 6, 1}
    };

    int C[4][4]; // Matriks hasil
    int i, j, k;

    printf("Menghitung perkalian matriks...\n");

    // 3 Nested Loop untuk perkalian
    for (i = 0; i < 4; i++) { // Loop baris hasil
        for (j = 0; j < 4; j++) { // Loop kolom hasil
            C[i][j] = 0; // Inisialisasi elemen C[i][j]
            for (k = 0; k < 4; k++) { // Loop kalkulasi
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mencetak matriks hasil
    printf("Matriks Hasil C (A * B):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", C[i][j]); // \t untuk tab agar rapi
        }
        printf("\n");
    }

    return 0;
}