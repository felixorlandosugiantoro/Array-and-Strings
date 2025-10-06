#include <stdio.h>

int main() {
    int T,i,j; // Jumlah test case di tandai dengan (T)
    scanf("%d", &T); // untuk menentukan berapa case


    // Loop untuk setiap test case yang kita kerjakan

    int i; // declare variable i
    for (i = 1; i <= T; i++) { // untuk loop case rumus dasar
        int N; // Jumlah bilangan dalam satu case
        scanf("%d", &N); // untuk mengambil nilai N awal

        int hasil_fpb; // hasil dari fpb yang sudah didapatkan
        int num_sekarang; // untuk menentukan ada berapa line fpb yang mau dikerjakan

        // Baca bilangan pertama sebagai nilai awal FPB
        scanf("%d", &hasil_fpb);

        // Loop untuk sisa N-1 bilangan
        int j;
        for (j = 1; j < N; j++) { 
            scanf("%d", &num_sekarang); //bedanya dengan yang diatas adalah ini untuk masuk ke logika FPB kalau yang diatas adalah untuk menentukan berapa banyak line fpb yang mau dihitung

            //  LOGIKA FPB DIMASUKKAN LANGSUNG DI SINI untuk menghitung
            int a = hasil_fpb;  // Ambil nilai FPB sementara
            int b = num_sekarang; // Ambil bilangan yang baru dibaca
            int temp;

            // Proses Algoritma Euclidean 
            while (b != 0) {
                temp = b;
                b = a % b;
                a = temp;
            }
            // Hasil FPB yang baru sekarang ada di variabel 'a'
            hasil_fpb = a;
            //  AKHIR DARI LOGIKA FPB 
        }

        // Cetak hasil akhir
        printf("Case #%d: %d\n", i, hasil_fpb);
    }

    return 0;
}