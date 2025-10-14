#include <stdio.h>

// Implementasi strcpy buatan sendiri
void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Implementasi strcat buatan sendiri
void my_strcat(char *dest, const char *src) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
}

// Fungsi rekursif untuk membuat Fibo String ke-N
void generateFiboString(int n, char s0, char s1, char *result) {
    // Base case
    if (n == 0) {
        result[0] = s0;
        result[1] = '\0';
        return;
    }
    if (n == 1) {
        result[0] = s1;
        result[1] = '\0';
        return;
    }

    // Langkah rekursif
    char s_n_minus_1[1000];
    char s_n_minus_2[1000];

    generateFiboString(n - 1, s0, s1, s_n_minus_1);
    generateFiboString(n - 2, s0, s1, s_n_minus_2);
    
    // Gabungkan S[n-1] dan S[n-2]
    my_strcpy(result, s_n_minus_1);
    my_strcat(result, s_n_minus_2);
}


int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int n;
        char s_base[3];
        scanf("%d %s", &n, s_base);
        char s0 = s_base[0];
        char s1 = s_base[1];

        char result[1000];
        generateFiboString(n, s0, s1, result);

        printf("Case #%d: %s\n", i, result);
    }

    return 0;
}