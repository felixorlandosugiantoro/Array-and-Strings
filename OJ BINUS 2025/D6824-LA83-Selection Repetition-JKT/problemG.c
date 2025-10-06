#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
	int i;
    for ( i = 1; i <= T; i++) {
        long long N, X;
        scanf("%lld %lld", &N, &X);

        // Hitung balik dari depan
        long long dari_depan = X / 2;

        // Hitung balik dari belakang
        long long total_lembar = N / 2;
        long long dari_belakang = total_lembar - dari_depan;

        // Tentukan nilai minimum
        if (dari_depan < dari_belakang) {
            printf("Case #%d: %lld\n", i, dari_depan);
        } else {
            printf("Case #%d: %lld\n", i, dari_belakang);
        }
    }
    return 0;
}