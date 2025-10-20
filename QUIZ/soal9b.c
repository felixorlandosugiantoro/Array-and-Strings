#include <stdio.h>
#include <string.h> // Untuk strlen()
#include <ctype.h>  // Untuk toupper() dan isspace()

int main() {
    char str[100];
    int i;
    int isNewWord = 1; // 1 = true (kita mulai di awal kata)

    printf("Masukkan kalimat: ");
    fgets(str, 100, stdin); // Pakai fgets agar bisa baca spasi

    // Hapus newline di akhir jika ada dari fgets
    str[strcspn(str, "\n")] = 0;

    for (i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) { // Jika ketemu spasi
            isNewWord = 1; // Kata berikutnya adalah kata baru
        } else if (isNewWord == 1) { // Jika ini awal kata baru
            str[i] = toupper(str[i]); // Ubah jadi Uppercase
            isNewWord = 0; // Sudah bukan awal kata lagi
        }
    }

    printf("Hasil: %s\n", str);
    return 0;
}