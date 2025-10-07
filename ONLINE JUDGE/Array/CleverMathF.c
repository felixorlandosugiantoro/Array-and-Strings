#include <stdio.h>

int main() {
    int T; // Jumlah kasus uji
    scanf("%d", &T);
    
    // Looping untuk setiap kasus uji
    for (int i = 1; i <= T; i++) {
        int first_num, second_num;
        scanf("%d %d", &first_num, &second_num);
        
        long long combined_num = 0;
        long long place_val = 1; // Penentu posisi digit (satuan, puluhan, dst.)
        
        // Terus proses selama salah satu angka masih memiliki digit
        while (first_num > 0 || second_num > 0) {
            // Ambil digit terakhir dari setiap angka
            int d1 = first_num % 10;
            int d2 = second_num % 10;
            
            // Jumlahkan kedua digit tanpa menyimpan sisa (carry)
            int new_digit = (d1 + d2) % 10;
            
            // Gabungkan digit baru ke dalam hasil akhir
            combined_num += new_digit * place_val;
            
            // Geser ke digit berikutnya (puluhan, ratusan, dst.)
            place_val *= 10;
            
            // Hapus digit terakhir yang sudah diproses
            first_num /= 10;
            second_num /= 10;
        }
        
        printf("Case #%d: %lld\n", i, combined_num);
    }
    
    return 0;
}

