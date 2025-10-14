#include <stdio.h>
#include <string.h>

int main() {
    int a;
    // Buffer kata dibuat 1001 untuk menampung string dengan panjang maksimal 1000 + null terminator.
    char kata[1001]; 
    
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        scanf("%s", kata);
        
        // Hitung panjang string sekali saja di awal untuk efisiensi.
        int length = strlen(kata);
        
        // Loop untuk menukar posisi karakter dari tepi ke tengah.
        for (int j = 0; j < length / 2; j++) {
            // Simpan karakter awal ke variabel sementara.
            char temp = kata[j];
            
            // Ganti karakter awal dengan karakter akhir.
            // Gunakan variabel 'length' yang sudah dihitung, bukan memanggil strlen() berulang kali.
            kata[j] = kata[length - j - 1];
            
            // Ganti karakter akhir dengan karakter yang tadi disimpan di temp.
            kata[length - j - 1] = temp;
        }
        
        printf("Case #%d: %s\n", i, kata);
    }

    return 0;
}