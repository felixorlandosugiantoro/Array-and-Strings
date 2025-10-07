#include <stdio.h> 

int main() {
    int T, X; 

    scanf("%d", &T); // Baca mau berapa kali program ini akan dijalankan (jumlah piramida).

    // Lakukan perulangan sebanyak T.
    for (int t = 0; t < T; t++) {
        scanf("%d", &X); // Baca input tinggi piramida (X) untuk test case saat ini.
        
        // Loop untuk setiap baris piramida, dari baris 1 sampai baris ke-X.
        for (int i = 1; i <= X; i++) {
            
            // Loop untuk mencetak spasi di sebelah kiri. Makin ke bawah, makin sedikit spasinya.
            for (int j = 0; j < X - i; j++) {
                printf(" ");
            }

            // Loop untuk mencetak bintang (*). Makin ke bawah, makin banyak bintangnya (ganjil).
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("*");
            }
            
            printf("\n"); 

        }
    }
    return 0; 
}