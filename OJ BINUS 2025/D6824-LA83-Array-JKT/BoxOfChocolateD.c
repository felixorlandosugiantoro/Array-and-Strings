#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int case_num = 1; case_num <= t; case_num++) {
        int N, M; // N untuk jumlah anak, M untuk jumlah cokelat
        scanf("%d %d", &N, &M);

        long long weights[505][505];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%lld", &weights[i][j]);
            }
        }

        long long total_weight_sum = 0;

        // Proses setiap baris (setiap anak)
        for (int i = 0; i < N; i++) {
            // Cari cokelat terberat untuk anak ini
            long long max_per_child = weights[i][0]; // Asumsikan yang pertama adalah terberat
            for (int j = 1; j < M; j++) {
                if (weights[i][j] > max_per_child) {
                    max_per_child = weights[i][j];
                }
            }
            // Tambahkan berat terberat anak ini ke total
            total_weight_sum += max_per_child;
        }

        printf("Case #%d: %lld\n", case_num, total_weight_sum);
    }

    return 0;
}
