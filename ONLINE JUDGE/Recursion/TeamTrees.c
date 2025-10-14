#include <stdio.h>

// Fungsi rekursif untuk menjumlahkan elemen array
long long sumArray(int arr[], int n) {
    // Base case: kalau array kosong, jumlahnya 0
    if (n <= 0) {
        return 0;
    }
    // Langkah rekursif: jumlah elemen terakhir + jumlah sisa arraynya
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        
        int A[1001];
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[j]);
        }

        long long total = sumArray(A, N);
        printf("Case #%d: %lld\n", i, total);
    }
    return 0;
}