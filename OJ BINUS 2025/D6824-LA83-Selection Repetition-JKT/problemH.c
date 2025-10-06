#include <stdio.h>
#include <stdlib.h>

long long llabsll(long long a) {
    return a < 0 ? -a : a;
}

int main() {
    int A;
    scanf("%d", &A);

    for (int t = 1; t <= A; t++) {
        int N;
        scanf("%d", &N);

        long long arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%lld", &arr[i]);
        }

        // cari selisih minimum
        long long minDiff = llabsll(arr[0] - arr[1]);
        for (int i = 1; i < N - 1; i++) {
            long long diff = llabsll(arr[i] - arr[i + 1]);
            if (diff < minDiff) {
                minDiff = diff;
            }
        }

        printf("Case #%d: %lld\n", t, minDiff);
    }

    return 0;
}