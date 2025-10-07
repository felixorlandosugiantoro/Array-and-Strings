#include <stdio.h>

int main(){
    int jumlah_tamu;
    scanf("%d", &jumlah_tamu);

    // Array untuk menyimpan nomor kamar yang diminta oleh setiap tamu
    int permintaan_kamar[5005];
    for (int i = 0; i < jumlah_tamu; i++){
        scanf("%d", &permintaan_kamar[i]);
    }


    // Jika tidak ada tamu, maka tidak ada yang senang.
    if (jumlah_tamu == 0) {
        printf("0\n");
        return 0;
    }

    // Mengurutkan array menggunakan metode Bubble Sort (tanpa library)
    for (int i = 0; i < jumlah_tamu - 1; i++){
        for (int j = 0; j < jumlah_tamu - i - 1; j++){
            // Jika elemen saat ini lebih besar dari elemen berikutnya, tukar posisi
            if (permintaan_kamar[j] > permintaan_kamar[j + 1]) {
                int temp = permintaan_kamar[j];
                permintaan_kamar[j] = permintaan_kamar[j + 1];
                permintaan_kamar[j + 1] = temp;
            }
     }
    }

    // Setelah diurutkan, hitung jumlah permintaan yang unik.
    // Kita mulai dengan 1, karena tamu pertama pasti mendapat kamar.
    int tamu_senang = 1;
    for (int i = 1; i < jumlah_tamu; i++) {
        // Jika permintaan saat ini berbeda dengan permintaan sebelumnya,
        // berarti ini adalah permintaan unik baru yang bisa dipenuhi.
        if (permintaan_kamar[i] != permintaan_kamar[i - 1]) {
            tamu_senang++;
        }
 }

    // Cetak hasil akhir
    printf("%d\n", tamu_senang);

    return 0;
}

