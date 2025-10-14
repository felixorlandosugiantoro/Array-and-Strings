#include <stdio.h>

// Fungsi untuk membaca satu baris penuh (termasuk spasi)
void readLine(char str[]) {
    char ch;
    int i = 0;
    // Buang karakter newline dari scanf sebelumnya
    while ((ch = getchar()) == '\n' || ch == '\r'); 
    
    // Baca karakter pertama dari baris yang sebenarnya
    if (ch != EOF) {
        str[i++] = ch;
    }

    // Baca sisa baris sampai ketemu newline
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    str[i] = '\0'; // Jangan lupa null-terminator
}

// Fungsi rekursif untuk mencetak string secara terbalik
void recursiveReverse(char *str) {
    // Base case: kalau sudah di akhir string, kembali.
    if (*str == '\0') {
        return;
    }
    
    // Langkah rekursif: panggil fungsi untuk sisa stringnya
    recursiveReverse(str + 1);
    
    // Cetak karakter sekarang setelah panggilan rekursif selesai
    printf("%c", *str);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char S[1001];
        readLine(S); // Pakai fungsi khusus untuk baca kalimat

        printf("Case #%d: ", i);
        recursiveReverse(S);
        printf("\n");
    }

    return 0;
}