#include <stdio.h> 

int main() { 
    // Mendeklarasikan tiga variabel:
    // T: untuk jumlah Test case.
    // A: untuk jumlah botol penuh awal.
    // B: untuk jumlah botol kosong yang diperlukan untuk ditukar.
    int T, A, B; // unsigned short adalah untuk bilangan positif yang lebih kecil.


    scanf("%d", &T); 
    
    for (int t = 1; t <= T; t++) { 
        // Membaca input A (jumlah botol awal) dan B (syarat penukaran) untuk setiap test case.
        scanf("%d %d", &A, &B); 
        
        // Inisialisasi variabel:
        // 'total' dimulai dengan A, karena kita sudah pasti meminum A botol awal.2
        // 'empty' (botol kosong) juga dimulai dengan A, karena setelah diminum, A botol awal menjadi kosong.
        int total = A, empty = A; 

        // Loop akan terus berjalan selama jumlah botol kosong ('empty') masih mencukupi untuk ditukar ('B').
        while (empty >= B) { 
            // Menghitung berapa botol baru yang didapat dari penukaran (empty / B) dan menambahkannya ke 'total'.
            total += empty / B; 
            
            // Memperbarui jumlah botol kosong.
            // Sisa botol setelah ditukar (empty % B) ditambah botol baru yang sudah diminum (empty / B).
            empty = (empty % B) + (empty / B); 
        }

        // Mencetak hasil akhir untuk setiap test case sesuai format.
        printf("Case #%d: %d\n", t, total); 
    }

    
    return 0; 
}