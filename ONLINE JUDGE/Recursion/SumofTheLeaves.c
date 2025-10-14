#include <stdio.h>

// Fungsi rekursif untuk mencari dan mencetak jumlah jalur ke daun
void findLeafSums(int arr[], int n, int currentIndex, int currentSum) {
    // Tambahkan nilai node sekarang ke total jalur
    currentSum += arr[currentIndex];

    // Hitung indeks anak kiri dan kanan (untuk array 0-indexed)
    int leftChildIndex = 2 * currentIndex + 1;
    int rightChildIndex = 2 * currentIndex + 2;

    // Cek apakah node ini adalah daun (kedua anaknya di luar array)
    int isLeaf = 1;
    if (leftChildIndex < n) {
        isLeaf = 0;
        findLeafSums(arr, n, leftChildIndex, currentSum);
    }
    if (rightChildIndex < n) {
        isLeaf = 0;
        findLeafSums(arr, n, rightChildIndex, currentSum);
    }
    
    // Jika ini adalah daun, cetak total jumlahnya
    if (isLeaf) {
        printf("%d\n", currentSum);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        
        int A[101];
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[j]);
        }

        printf("Case #%d:\n", i);
        if (N > 0) {
            findLeafSums(A, N, 0, 0); // Mulai rekursi dari akar (indeks 0)
        }
    }

    return 0;
}