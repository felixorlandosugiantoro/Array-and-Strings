#include <stdio.h>

/**
 * Fungsi rekursif untuk menghitung jumlah lantai yang kebanjiran.
 * denah: peta rumah 2D
 * N: jumlah baris
 * M: jumlah kolom
 * row, col: koordinat saat ini yang sedang dicek
 */
int hitungBanjir(char denah[101][101], int N, int M, int row, int col) {
    // BASE CASE: Berhenti jika...
    // 1. Keluar dari batas denah (atas, bawah, kiri, kanan)
    // 2. Menabrak tembok ('#') atau sumber air ('S')
    // 3. Menemukan petak yang bukan lantai (misalnya sudah ditandai)
    if (row < 0 || row >= N || col < 0 || col >= M || denah[row][col] != '.') {
        return 0;
    }

    // AKSI: Petak ini adalah lantai yang valid.
    // 1. Tandai sebagai sudah dikunjungi agar tidak dihitung lagi.
    //    Kita ubah saja menjadi tembok.
    denah[row][col] = '#';

    // 2. Hitung petak ini (nilai 1) ditambah hasil penjelajahan ke 4 arah.
    int total = 1;

    // LANGKAH REKURSIF: Suruh "petugas" baru untuk cek 4 arah dari sini.
    total += hitungBanjir(denah, N, M, row - 1, col); // Cek atas
    total += hitungBanjir(denah, N, M, row + 1, col); // Cek bawah
    total += hitungBanjir(denah, N, M, row, col - 1); // Cek kiri
    total += hitungBanjir(denah, N, M, row, col + 1); // Cek kanan

    return total;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);

        char denah[101][101];
        int start_row = -1, start_col = -1;

        // Baca denah dan cari posisi 'S'
        for (int r = 0; r < N; r++) {
            scanf("%s", denah[r]);
            for (int c = 0; c < M; c++) {
                if (denah[r][c] == 'S') {
                    start_row = r;
                    start_col = c;
                }
            }
        }

        int total_lantai_banjir = 0;
        // Pastikan 'S' ditemukan sebelum memulai
        if (start_row != -1) {
            // Mulai penyebaran air dari 4 tetangga 'S'
            total_lantai_banjir += hitungBanjir(denah, N, M, start_row - 1, start_col);
            total_lantai_banjir += hitungBanjir(denah, N, M, start_row + 1, start_col);
            total_lantai_banjir += hitungBanjir(denah, N, M, start_row, start_col - 1);
            total_lantai_banjir += hitungBanjir(denah, N, M, start_row, start_col + 1);
        }

        printf("Case #%d: %d\n", i, total_lantai_banjir);
    }

    return 0;
}